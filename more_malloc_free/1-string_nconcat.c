#include "main.h"

/**
 * string_nconcat - concatenates two strings up to n bytes from the 2nd string
 * @s1: first string, treated as empty string if NULL
 * @s2: second string to concatenate, treated as empty if NULL
 * @n: maximum number of bytes from s2 to concatenate
 *
 * Return: pointer to the newly allocated string containing s1,
 * followed by up to n bytes from s2, null-terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s3;

	/* gestion des cas où les chaines sont NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* calcul de la longueur de S1 */
	for (i = 0; s1[i] != '\0'; i++)
		;
	/* calcul de la longueur totale de s2*/
	for (j = 0; s2[j] != '\0'; j++)
		;
	/* taille d'allocation selon la valeur de n */
	if (n < j)
	{
		s3 = malloc((i + n + 1) * sizeof(char));
		if (!s3)
		return (NULL);
		/* copie de s1 dans s3 */
		for (k = 0; k < i; k++)
			s3[k] = s1[k];
		/* copie des n premiers char de s2 après s1 */
		for (k = 0; k < n; k++)
			s3[i + k] = s2[k];
		/* caractère de fin */
		s3[i + n] = '\0';
	}
	else
	{
		/* allocation pour s1 + s2 complet */
		s3 = malloc((i + j + 1) * sizeof(char));

		if (!s3)
		return (NULL);
		/* copie de s1 dans s3 */
		for (k = 0; k < i; k++)
			s3[k] = s1[k];
		/* copie entière dans s2 après s1*/
		for (k = 0; k < j; k++)
			s3[i + k] = s2[k];
		/* caractère de fin */
		s3[i + j] = '\0';
	}
	return (s3);
}

/* Illisible au case de la restriction des 40 lignes, merci betty !*/
