#include "main.h"

/**
 * append_text_to_file - attaches text to the end of a file
 * @filename: pointer for the name of the file created
 * @text_content: text to be added to the end of the file
 *
 * Return: returns -1 if the filename is null
 * or the function fails else it returns 1
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d = 0;
	int by_w = 0;
	int l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	file_d = open(filename, O_WRONLY | O_APPEND);
	by_w = write(file_d, text_content, l);

	if (file_d == -1 || by_w == -1)
		return (-1);

close(file_d);

return (1);

}
