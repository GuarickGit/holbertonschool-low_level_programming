#include "main.h"

/**
 * _strdup - creates a duplicate of the given string
 *
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if memory allocation
 * 			fails or if str is NULL
 */

char *_strdup(char *str)
{
	int length;
	int i;
	char *arr;

	/* vérifie si la chaîne reçue est NULL */
	if (str == NULL)
		return (NULL);

	/* calcule la longueur de la chaîne (sans compter le '\0') */
	for (length = 0; str[length] != '\0'; length++)
	;

	/* allocation dynamique de la mémoire pour la copie (+1 pour '\0') */
	arr = malloc((length + 1) * sizeof(char));

	/* vérifie si malloc a échoué */
	if (arr == NULL)
		return (NULL);

	/* copie chaque caractère, y compris le '\0', vers la nouvelle chaîne */
	for (i = 0; i <= length; i++)
		arr[i] = str[i];

	/* retourne le pointeur vers la copie */
	return (arr);
}
