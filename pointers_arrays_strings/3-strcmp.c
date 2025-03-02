#include "main.h"

/**
 * _strcmp - compares two strings character by character
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 if equal, negative if s1 < s2, positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Compare les caractères tant que != et qu'on n'a pas atteint '\0' */
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;

	/* si s1 = s2, retourne 0*/
	if (s1[i] == s2[i])
		return (0);

	/* retourne la différence ASCII entre s1[i] et s2[i] */
	else
		return (s1[i] - s2[i]);
}
