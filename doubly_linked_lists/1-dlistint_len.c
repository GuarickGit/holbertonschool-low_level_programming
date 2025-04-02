#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/* Tant qu'on n'est pas à la fin de la liste */
	while (h != NULL)
	{
		/* On incrémente le compteur */
		count++;

		/* On passe au noeud suivant */
		h = h->next;
	}
	/* On retourne le nombre total de nœuds */
	return (count);
}
