#include "main.h"

/**
 * append_text_to_file- adds text to the end of the file
 * @filename: pointer to the file name
 * @text_content: string added at the end of file
 *
 * Return: returns -1 if function fails or filename is null
 *  or writer does not have write permission or file does not
 *  exist else it returns 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int m, n, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	m = open(filename, O_WRONLY | O_APPEND);
	n = write(m, text_content, l);

	if (m == -1 || n == -1)
		return (-1);

	close(m);

	return (1);
}
