#include "main.h"
#include <unistd.h>

/**
 * _putchar- writes c to stdout
 *@c: the character to be printed
 *
 * Return: 1 when success
 * -1 when fails
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
