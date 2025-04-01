#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the first node of the list
 *
 * Return: The total number of nodes
 */

size_t list_len(const list_t *h)
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
