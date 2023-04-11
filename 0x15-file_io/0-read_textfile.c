#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads text file and prints it to STDOUT.
 * @filename: Requiescat
 * @letters: letters in the file
 * Return: number of bytes that are read and printed
 *  returns 0 when functon fails or filename dosen't exist
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t file_d;
ssize_t by_w;
ssize_t by_r;

file_d = open(filename, O_RDONLY);
if (file_d == -1)
	return(0);

buff= malloc(sizeof(char) *letters);
by_r = read (file_d, buff, letters);
by_w = write(STDOUT_FILENO, buff, by_r);


free(buff);
close(file_d);
return(by_w);

}

