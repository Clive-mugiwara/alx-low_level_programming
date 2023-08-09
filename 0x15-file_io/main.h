#ifndef _FILE_IO
#define _FILE_IO

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
