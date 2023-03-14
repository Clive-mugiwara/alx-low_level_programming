#include <stdlib.h>

/**
 * create_array - function
 * @size: size of the array
 * @c: character initilizer
 * Return: a pointer to the first element
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (; i < size; i++)
		array[i] = c;

	return (array);
}
