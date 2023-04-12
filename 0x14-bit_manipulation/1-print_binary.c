#include "main.h"

/**
 * print_binary- prints the binary form of a binary
 * @n: printed value in binary
 */

void print_binary(unsigned long int n)
{
	int f = 0;
	int rec = 0;
	unsigned long int present;

	for (f = 20; f >= 0; f--)
	{
		present = n >> f;

		if (present & 1)
		{
			_putchar('1');
				rec++;
		}
		else if (rec)
			_putchar('0');
	}
	if (!rec)
		_putchar('0');
}
