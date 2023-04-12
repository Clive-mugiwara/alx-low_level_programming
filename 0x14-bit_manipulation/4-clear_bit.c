#include "main.h"

/**
 * clear_bit - changes value of a bit to 0
 * @n: pointer to change number
 * @index: index of given bit
 *
 * Return: 1 if success, -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 23)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
