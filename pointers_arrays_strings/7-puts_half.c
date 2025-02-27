#include "main.h"

/**
 * puts_half - print half of a string
 *
 * @str: input string
 */

void puts_half(char *str)
{
	int length = 0;
	int start;

	/* trouver la longueur de la string */
	while (str[length] != '\0')
		length++;

	/* trouver le point de depart */
	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;

	/* afficher la 2eme moitie */
	while (start < length)
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
