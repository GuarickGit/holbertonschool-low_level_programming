#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the list
 *
 * This function iterates through a doubly linked list of type dlistint_t
 * and frees each node from memory.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp; /* Pointeur temporaire pour parcourir la liste */
	dlistint_t *next; /* Pointeur vers le nœud suivant */

	tmp = head; /* Initialisation du parcours de la liste à partir de head */

	while (tmp != NULL) /* Tant qu'on n'est pas à la fin de la liste */
	{
		next = tmp->next; /* Sauvegarde du nœud suivant */
		free(tmp); /* Libération du nœud lui-même */
		tmp = next; /* Passage au nœud suivant */
	}
}
