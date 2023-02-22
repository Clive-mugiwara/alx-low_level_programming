#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: value to check
 *
 * Return: 1 if c is a character, lowercase or uppercase and 0 otherwise
 */
int print_sign(int n)
{
	signed short result = 0;

	if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
	{
		_putchar('+');
		result = 1;
	}

	return (result);
}
