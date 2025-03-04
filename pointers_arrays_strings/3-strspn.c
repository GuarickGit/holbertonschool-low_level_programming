#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s:the input string to search
 * @accept: the set of characters to match in s
 *
 * Return: The number of bytes in the initial segment of s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int found; /* flag pour savoir si un caractère est trouvé */
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0; /* réinitialisation du flag */

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1; /* match trouvé */
				break;
			}
		}

		if (found == 0) /* si aucun match trouvé, on arrête */
			break;

		counter++; /* on incrémente le compteur */
	}

	return (counter); /* retourne le nombre de caractères trouvés */
}
