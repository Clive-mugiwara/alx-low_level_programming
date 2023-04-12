#include "main.h"

/**
 * set_bit - set the bit of of an index to 1
 * @n: pointer
 * @index: index to be changed
 *
 * Return: if successful 1 if fail -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 23)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
