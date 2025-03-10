#include "main.h"

/**
 * str_concat - concatenates two strings into a new allocated memory space
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the new concatenated string, or NULL if allocation fails
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calcul des longueurs de s1 et s2 */
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	/* allocation mémoire */
	arr = malloc((i + j + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);

	/* copie de s1 dans arr */
	for (k = 0; k < i; k++)
		arr[k] = s1[k];

	/* copie de s2 à la suite de s1 */
	for (k = 0; k < j; k++)
		arr[i + k] = s2[k];

	/* ajout du caractère de fin */
	arr[i + j] = '\0';

	return (arr);
}
