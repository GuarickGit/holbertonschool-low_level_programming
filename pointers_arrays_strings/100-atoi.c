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
	int i = 0;
	int result = 0;
	int sign = 1;

	/* Gestion des signes avant le nombre */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
			i++;
	}

	/* Conversion des chiffres en entier */
	while (s[i] >= '0' && s[i] <= '9')
	{
	/* Vérification de l'overflow */
		if (result > (2147483647 - (s[i] - '0')) / 10)
		{
			if (sign == 1)
				return (2147483647);  /* INT_MAX */
			else
				return (-2147483648); /* INT_MIN */
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
