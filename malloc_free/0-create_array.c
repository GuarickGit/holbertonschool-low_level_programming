#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and init. it with a specific char
 *
 * @size: the size of the array to be created
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if size = 0 or if memo. alloc. fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	/* vérifie si la taille demandée est 0, retourne NULL dans ce cas */
	if (size == 0)
		return (NULL);

	/*alloue dynamiquement de la mémoire pour le tableau de caractères */
	arr = malloc(size * sizeof(char));

	/* vérifie si l'allocation mémoire a échoué */
	if (!arr)
		return (NULL);

	/* initialise chaque élément du tableau avec le caractère spécifié */
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	/* retourne le pointeur vers le tableau alloué et initialisé */
	return (arr);
}
