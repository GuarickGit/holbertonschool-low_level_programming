#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: the input string to modify
 *
 * Return: pointer to the modified string
 */

char *leet(char *str)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet_nums[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;
	int j;

	while (str[i] != '\0') /* parcours la chaine de caracteres */
	{
		/* compare les lettres a remplacer */
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_nums[j]; /* remplacement */
				break; /* sortir de la boucle une fois remplace */
			}
		}
		i++;
	}

	return (str); /* retourne la chaine modifiee */
}
