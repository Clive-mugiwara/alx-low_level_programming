#include "main.h"

/**
 * create_file - prototype creates file
 * @filename: file to created
 * @text_content: pointer to string contained in the file
 *
 * Return: returns -1 if fail else
 * returns 1
 */

int create_file(const char *filename, char *text_content)
{
	int des, x, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	des = open(filename, O_CREAT | O_RDWR| O_TRUNC, 0600);
	x = write(des, text_content, l);

	if (des == -1 || x == -1)
		return (-1);

	close(des);

	return (1);
}

