#include "main.h"

/**
 * get_bit - get bi's value at specific index
 * @n: number
 * @index: bit's index
 * Return: bit value at index otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > MAX_UNSIGNED_LONG_INT_BIT_INDEX)
		return (-1);
	return (1 & (n >> index));
}
