#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- prototypr that reads text file and prints to STDOUT
 * @filename: text file to be read
 * @letters: letters to be read
 * Return: returns 'w' when file is read and printed
 * 	 0 when filename is null or the function fails
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
	p = malloc(sizeof(char) *letters);
	y = read(des, p, letters);
	x = write(STDOUT_FILENO, p, y);

	free(p);
	close(des);
	return (x);
}
