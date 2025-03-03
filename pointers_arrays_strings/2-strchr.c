#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search in
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++) /* parcours la chaine jusqu'à '\0' */
	{
		if (s[i] == c) /* si on trouve le caractère */
			return (&s[i]); /* retourne un pointeur vers ce caractère */
	}

	/* vérification si le caractère est '\0' */
	if (c == '\0')
		return (&s[i]); /* retourne le pointeur sur le caractère nul */
}
