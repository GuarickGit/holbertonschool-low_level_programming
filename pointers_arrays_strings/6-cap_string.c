#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: the input string to modify
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int new_word = 1; /* indique si le prochain char doit être en maj (bool) */

	while (str[i] != '\0')
	{
		/* liste des separateurs */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			new_word = 1; /* marque le debut d'un mot */
		}

		else if (new_word == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32; /* convertit la minuscule en majuscule */
			new_word = 0; /* désactiver pour le reste du mot */
		}

		else
		{
			new_word = 0; /* continue normalement */
		}

		i++;
	}

	return (str);
}
