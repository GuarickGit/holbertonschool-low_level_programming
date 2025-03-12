#include "main.h"

/**
 * _calloc - allocates memory for an array, initialized to zero
 *
 * @nmemb: number of elements in the array
 * @size: size (in bytes) of each element
 *
 * Return: pointer to allocated memory, or NULL if allocation fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;

	/* vérifie si nmemb ou size valent */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocation de la mémoire */
	arr = malloc(nmemb * size);

	/* vérifie si malloc a échoué */
	if (!arr)
		return (NULL);

	/* initialise la mémoire allouée à zéro */
	for (i = 0; i < (nmemb * size); i++)
		((char *)arr)[i] = 0;

	/* renvoie un pointeur vers la mémoire allouée et initialisée */
	return (arr);

}

/*
 * On utilise (char *) ligne 39 car un void * ne peut pas être directement
 * manipulé. char * permet de parcourir la mémoire octet par octet,
 * (puisque 1 char = 1 octet) ce qui est nécessaire pour initialiser chaque
 * octet à zéro.
 */
