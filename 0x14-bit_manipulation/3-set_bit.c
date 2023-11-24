#include "main.h"

/**
 * set_bit - set a specific bit to 0
 * @n: number
 * @index: bit's index to modify
 * Return: 1 if no problem appear otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > MAX_UNSIGNED_LONG_INT_BIT_INDEX)
		return (-1);
	*n |= (1 << index);
	return (1);
}
