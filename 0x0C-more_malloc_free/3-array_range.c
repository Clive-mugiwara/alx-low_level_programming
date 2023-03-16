#include <stdlib.h>
/**
 * array_range - function that create an array of integers
 * @min: array minimun
 * @max: array maximum
 * Return: pointer to the newly allocated memory
 */

int *array_range(int min, int max)
{
	int *pt, i = 0;

	if (min > max)
		return (NULL);

	pt = malloc(sizeof(int) * (max - min + 1));
	if (pt == NULL)
		return (NULL);
	for (; i <= max - min; i++)
		pt[i++] = min++;
	return (pt);
}
