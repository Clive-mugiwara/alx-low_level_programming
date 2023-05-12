#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buff(char *file);
void close_file(int des);

/**
 * create_buffer - grants buffer space of 1024 bytes
 * @file: name of the file to store buffer characters
 *
 * Return: pointer to the newly allocated buffer
 */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf( STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - close file descriptor
 * @des: file descriptor
 */

void close_file(int des)
{
	int b;

	b = close(des);

	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", des);
		exit(100);
	}
}

/**
 *main- copies contents of one file to the other
 *@argc: number of arguments given to the program
 *@argv: array of pointers to argument
 *
 * Return:returns 0 if successful
 *
 */

int main(int argc, char *argv[])
{
	int f, g, h, x;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	f = open(argv[1], O_RDONLY);
	h = read(f, buff, 1024);
	g = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if(f == -1 || h == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		x = write(g, buff, h);
		if (f == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error : Can't read from file %s\n", argv[2]);
			exit(99);
		}

		h = read(f, buff, 1024);
		g = open(argv[2], O_WRONLY | O_APPEND);

	}while (h > 0);

	free(buff);
	close_file(f);
	close_file (g);

	return (0);
}	
