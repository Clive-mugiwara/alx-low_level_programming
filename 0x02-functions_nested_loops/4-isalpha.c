#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: value to check
 *
 * Return: 1 if c is a character, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	return ((((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90))) ? 1 : 0);
}
