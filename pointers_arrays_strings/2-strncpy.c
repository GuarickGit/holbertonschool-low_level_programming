#include "main.h"

/**
 * _strncpy - copies a string up to n characters
 *
 * @dest: destination buffer where the string is copied
 * @src: source string to be copied
 * @n: maximum number of characters to be copy
 *
 * Return: pointer to the destination string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copie les `n` premiers caractères de `src` dans `dest` */
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}

	/* Remplit le reste de `dest` avec '\0' si `src` est plus court que `n` */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
