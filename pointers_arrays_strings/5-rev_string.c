#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int first = 0;
	int length = 0;
	int last;

	/* trouver la longueur de la chaine */

	while (s[length] != '\0')
	{
		length++;
	}

	/* revenir au dernier caractere de la chaine */

	last = length - 1;

	/* echanger les caracteres */

	while (first < last)
	{
		int temp = s[first]; /* pas *first, c'est un entier */

		s[first] = s[last];
		s[last] = temp;

		first++;
		last--;
	}
}
