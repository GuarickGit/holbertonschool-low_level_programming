#include "main.h"

/**
 * _strstr - Locate a substring in a string
 * @haystack: The main string to search in
 * @needle: The substring to find
 *
 * Return: A pointer to the beginning of the found substring, or 0 if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	/* parcourt chaque caractère de haystack */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* vérifie si needle correspond à la position actuelle de haystack[i] */
		for (j = 0; needle[j] != '\0'; j++)
		{
			/* si un caractère ne correspond pas, on arrête la vérification */
			if (haystack[i + j] != needle[j])
			break;
		}
		/* si on a parcouru la longueur de needle, c'est une correspondance */
		if (needle[j] == '\0')
			return (&haystack[i]); /* Retourne un pointeur */
	}
	return (0);
}
