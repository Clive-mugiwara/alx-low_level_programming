#include "main.h"
#include <stdio.h>

/**
 * _powr - function that calculates power
 * @x: first operand, number to be raised
 * @y: second operand, power level
 * Return: natural power
 */
int _powr(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _powr(x, y - 1));
}


/**
 * binary_to_uint - function that convert binary number to int
 * @b: binary number to convert
 * Return: decimal int number otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0, j = 0;

	if (b == NULL)
		return (0);
	j = strlen(b) - 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += (b[i] - '0') * _powr(2, j--);
	}
	return (num);
}
