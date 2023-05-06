#include "main.h"

/**
 * print_binary- prototype that prints binary representation
 * of decimal
 * @n: mumber to be represented in binary
 */

void print_binary(unsigned long int n)
{
	int a, y = 0;
	unsigned long int z;

	for (a = 21; a >= 0; a--)
	{
		z = n >> a;

		if (z & 1)
		{
			_putchar('1');
			y++;
		}
		else if (y)
			_putchar('0');
	}
	if (!y)
		_putchar('0');
}
