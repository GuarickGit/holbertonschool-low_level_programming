#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 *
 * @str: the input string to modify
 *
 * Return: Pointer to the modified string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* si minuscule, convertit en Maj */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (str[i] - 32); /* 32 = difference entre min et maj */
		}
		i++;
	}
	return (str);
}
