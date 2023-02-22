#include "main.h"

/**
 * print_alphabet_x10 - function that print the alphabet in lowercase
 * followed by a new line 10 times
 */
void print_alphabet_x10(void)
{
	int i = 10;
	int j = 0;

	do {
		for (j = 97; j < 97 + 26; j++)
			_putchar(j);
		_putchar('\n');
		i--;
	} while (i > 0);
}
