#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the input string to search
 * @accept: the set of characters to match in 's'
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++) /* 1ère loop, check 's' */
	{
		for (j = 0; accept[j] != '\0'; j++) /* 2ème loop, check 'accept' */
		{
			if (s[i] == accept[j]) /* si un match est trouvé */
			{
				return (&s[i]); /* retourne le pointeur du 1er match */
			}
		}
	}
	return (0); /* retourne NULL si aucun match trouvé */
}
