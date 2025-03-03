#include "main.h"

/**
 * _strchr - locates character in a string
 *
 * @s: pointer of string source
 * @c: character to locate
 *
 * Return: return s with character locate
 */

char *_strchr(char *s, char c)
{
	while (*s++) /* boucle tant qu'on n'atteint pas '\0' */
	{
		if (*s == c) /* si le caractère actuel correspond à c */
		{
			return (s); /* retourne l'adresse du premier c trouvé */
		}
		s++;
	}
	return (0); /* retourne NULL si c n'est pas trouvé dans la chaine */
}
