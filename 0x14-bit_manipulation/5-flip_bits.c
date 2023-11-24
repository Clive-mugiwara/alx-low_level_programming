#include "main.h"

/**
 * flip_bits - get number of bits to flip from a number to another
 * @n: first operand
 * @m: second operand
 * Return: number of bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = 0, tmp = 0;

	tmp = m ^ n;
	while (tmp != 0)
	{
		res += tmp & 1;
		tmp >>= 1;
	}
	return (res);
}
