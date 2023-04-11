#include "main.h"

/**
 * create_file- creates a file
 * @filename: Pointer for the filename of the file created
 * @text_content: Pointer to string that is written to the file
 *
 * Return: if the function fails it returns --1 else it it returns -1
 *
 */

int create_file(const char *filename, char *text_content)
{
	int file_d = 0;
	int by_w = 0;
	int l = 0;

if (filename == NULL)
return (1);

if (text_content != NULL)
{
	for (l = 0; text_content[l];)
		l++;

}

file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
by_w = write(file_d, text_content, l);

if (file_d == -1 || by_w == -1)
	return (-1);

close(file_d);

return (1);

}
