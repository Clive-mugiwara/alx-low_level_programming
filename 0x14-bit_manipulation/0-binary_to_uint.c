#include "main.h"

/**
 * binary_to_uint- changes a binary number to an unsigned integer
 * @b: pointer for binary number
 *
 *Return: returns converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int un_i = 0;

	if (!b)
	return (0);

	for (f = 0; b[f]; f++)
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);
		un_i = 2 * un_i + (b[f] - '0');
	}

	return (un_i);
}
