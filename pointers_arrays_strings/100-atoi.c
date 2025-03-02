#include "main.h"
#include <limits.h>  /* pour INT_MAX et INT_MIN */

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

	/* ignore les espaces et caractères de contrôle */
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	/* gère les signes */
	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	/* convertit les chiffres en entier */
	while (*s >= '0' && *s <= '9')
	{
		/* vérifie si la multiplication entraînerait un overflow */
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			/* overflow détecté */
			return (sign == 1) ? INT_MAX : INT_MIN;
		}

		result = result * 10 + (*s - '0');
		s++;
	}

	/* retourne le résultat avec le bon signe */
	return result * sign;
}
