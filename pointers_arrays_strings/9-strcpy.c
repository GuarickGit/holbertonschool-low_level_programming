#include "main.h"

/**
 * _strcpy - copies a string form src to dest
 *
 * @dest: destination buffer
 *
 * @src: source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i]; /* copie chaque caractere de src dans dest */
		i++;
	}

	dest[i] = '\0'; /* ajoute le caractere \o a la fin */

	return (dest); /* retourne le pointeur vers dest */
}
