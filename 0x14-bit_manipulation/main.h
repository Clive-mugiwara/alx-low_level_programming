#ifndef __BIT_MANIP__
#define __BIT_MANIP__
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_UNSIGNED_LONG_INT_BIT_INDEX 63

int _putchar(char c);
int _pow(int x, int y);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
