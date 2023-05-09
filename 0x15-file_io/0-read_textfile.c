#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this reads text file and prints to STDOUT
 * @filename: file to be read
 * @letters: leters to be read
 * Return: returns 'w' when the number of bytes are read and printed
 *  and 0 when function fails or filename is null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	ssize_t des;
	ssize_t x;
	ssize_t y;

	des = open(filename, O_RDONLY);
		if (des == -1)
			return (0);
		p = malloc(sizeof(char)*letters);
		y = read(des, p, letters);
		x = write(STDOUT_FILENO, p, y);

		free(p);
		close(des);
		return (x);
}
	
