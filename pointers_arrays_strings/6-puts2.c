#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: pointer of str
 */

void puts2(char *str)
{
	int i;

	/*init i = 0, while str[i] != \o , incremente de 1 */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* si i % 2 = 0, alors mutliple de 2, donc 1 chara sur 2  */
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
