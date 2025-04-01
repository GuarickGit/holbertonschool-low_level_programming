#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	/* Parcours de la liste jusqu'à ce que le pointeur soit NULL */
	while (h != NULL)
	{
		/* Affiche la valeur contenue dans le nœud */
		printf("%d\n", h->n);

		/* Incrémente le compteur de nœuds */
		count++;

		/* Passe au nœud suivant */
		h = h->next;
	}

	/* Retourne le nombre total de nœuds */
	return (count);
}
