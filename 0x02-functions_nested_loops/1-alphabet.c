#include "main.h"

/**
 * print_alphabet - function that the alphabet in lowercase
 * followed by a new line
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i < 97 + 26; i++)
		_putchar(i);
	_putchar('\n');
}
