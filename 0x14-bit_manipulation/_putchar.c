#include "main.h"
#include <unistd.h>

/**
 *_putchar - prints c to stdout
 *@c: printed character
 *Return: success 1
 *when error occurs returns -1 with
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
