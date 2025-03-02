#include "main.h"

/**
 * _atoi - Converts a string to an integer
 *
 * @s: the input string
 *
 * Return: the integer value of the string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int number_found = 0;

	/* ignorer les espaces et caracteres de controle */
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	/* gerer les signes */
	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	/* convertit les chiffres en entier */
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		number_found = 1;
		s++;
	}

	/* retourne le resultat avec le bon signe */
	if (!number_found)
		return 0;

	return result * sign;
}
