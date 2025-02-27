#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: pointer of str
 */

void puts2(char *str)
{
	int i;

	/*init i = 0, while str[i] != \o , incremente de 2 */
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
