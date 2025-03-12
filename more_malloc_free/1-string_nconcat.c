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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n < j)
	{
		s3 = malloc((i + n + 1) * sizeof(char));
		if (!s3)
		return (NULL);
		for (k = 0; k < i; k++)
			s3[k] = s1[k];
		for (k = 0; k < n; k++)
			s3[i + k] = s2[k];
		s3[i + n] = '\0';
	}
	else
	{
		s3 = malloc((i + j + 1) * sizeof(char));

		if (!s3)
		return (NULL);

		for (k = 0; k < i; k++)
			s3[k] = s1[k];

		for (k = 0; k < j; k++)
			s3[i + k] = s2[k];

		s3[i + j] = '\0';
	}
	return (s3);
}
