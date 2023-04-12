#include "main.h"

/**
 * get_bit- gives the decimal value of a bit at an index
 * @n: specified number
 * @index: index
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b_value;

	if (index > 23)
		return (-1);

	b_value = (n >> index) & 1;

	return (b_value);
}
