#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index
 * of a dlistint_t linked list
 * @head: Double pointer to the head of the doubly linked list
 * @index: Index of the node to delete (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *to_delete; /* Stockage du nœud à supprimer quand index == 0 */
	dlistint_t *current; /* Parcourt la liste jusqu'au nœud à supprimer */
	unsigned int count = 0;

	if (*head == NULL) /* Si la liste est vide, rien à supprimer */
		return (-1); /* Retourne -1 si failed */

	to_delete = *head;

	if (index == 0) /* Cas particulier : suppression de la tête de la liste */
	{
		*head = to_delete->next;
		/* Si un nœud existe après l'ancien head, on met à jour son prev */
		if (*head != NULL)
			(*head)->prev = NULL;

		free(to_delete);
		return (1); /* Retourne 1 si success */
	}
	/* On parcourt la liste jusqu'à atteindre le nœud à supprimer */
	current = *head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	/* Si on est arrivé à la fin sans atteindre l'index, échec */
	if (current == NULL)
		return (-1); /* Retourne -1 si failed */

	/* On relie le nœud précédent au suivant, si possible */
	if (current->prev != NULL)
		current->prev->next = current->next;
	/* On relie le nœud suivant au précédent, si possible */
	if (current->next != NULL)
		current->next->prev = current->prev;
	/* On libère le nœud à supprimer */
	free(current);
	return (1); /* Retourne 1 si success */
}
