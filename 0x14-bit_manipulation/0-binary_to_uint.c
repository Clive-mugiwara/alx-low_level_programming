#include "main.h"

/**
 * binary_to_uint- changes a binary no. to an unsigned int
 * @b: pointer that contains binary no.
 *
 * Return: returns changed number
 */

unsigned int binary_to_uint(const char *b)
{
	int s;
	unsigned int z = 0;

	if (!b)
		return(0);

	for (s = 0; b[s]; s++)
	{
		if (b[s] < '0' || b[s] > '1')
			return (0);
		z = 2 * z + (b[s] - '0');
	}

	return (z);

}
