#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* cherche la fin de dest */
	while (dest[i] != '\0')
		i++;

	/* Copie au maximum n caractères de src dans dest */
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	/* Ajoute '\0' SEULEMENT si src[j] == '\0' avant d'atteindre n */
	if (j < n)
		dest[i] = '\0';

	return (dest);
}
