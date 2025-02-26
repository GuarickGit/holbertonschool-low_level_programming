#include "main.h"

/**
 * _puts - print a string, followed by a new line
 *
 * @str: pointer of str
 */

void _puts(char *str)
{
	while (*str) /* convention de (*str != '\0') */
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
