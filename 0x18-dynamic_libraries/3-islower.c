#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: value to check
 *
 * Return: 1 if c is a character or 0 otherwise
 */
int _islower(int c)
{
	return ((c >= 97) && (c <= 122) ? 1 : 0);
}
