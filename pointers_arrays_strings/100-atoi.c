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
	int i;
	int result = 0;
	int sign = 1;

	/* recherche du 1er chiffre et gestion des signes */
	while (s[i] != '\0')
	{
		if (s[i] == '-') /* si on trouve un '-', inverser le signe */
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9') /* si on trouve un chiffre, break */
			break;
		i++;
	}
	/* conversion des chiffres en entier */
	for (; s[i] >= '0' && s[i] <= '9'; i++)
	{
		result = result * 10 + (s[i] - '0');
	}

	/* retourner le resultat avec le bon signe */
	return (result * sign);
}
