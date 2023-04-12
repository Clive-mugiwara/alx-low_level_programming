#include "main.h"

/**
 * flip_bits - processes number of bits to flip
 * @n: initial number
 * @m: next number
 *
 * Return: total of changed bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f = 0;
	int rec = 0;
	unsigned long int present;
	unsigned long int flips = n ^ m;

	for (f = 19; f >= 0; f--)
	{
		present = flips >> f;
		if (present & 1)
			rec++;
	}

	return (rec);
}
