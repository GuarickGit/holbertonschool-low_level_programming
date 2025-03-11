#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory
 * exits with status 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr; /* pointeur générique */

	ptr = malloc(b); /* allocation dynamique de b octets avec malloc */

	if (!ptr) /* vérification de l'allocation | similaire à ptr == NULL */
		exit (98); /* si fail, arrêt du programme avec statut 98 */

	return (ptr); /* si succès, retourne l'adresse mémoire allouée */
}
