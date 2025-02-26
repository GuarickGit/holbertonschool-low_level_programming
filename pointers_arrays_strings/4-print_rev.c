#include "main.h"

/**
 * print_rev - print a string in reverse, followed by a new line
 *
 * @s: pointer tested
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s) /* <=> (*s != '\0') */
	{
		length++;
		s++;
	}

	/* 's' pointe sur le \0 et 'length' contient la longueur de la chaine */

	s--; /* decremente pour pointer le dernier caractere de la string */

	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}
	_putchar('\n');
}
