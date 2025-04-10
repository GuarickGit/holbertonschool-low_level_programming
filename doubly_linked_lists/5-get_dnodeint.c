#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to retrieve, starting from 0
 *
 * Return: Pointer to the node at the given index, or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	/* On parcourt la liste complète et tant que l'index n'est pas atteint */
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	/* Si current est NULL, alors l'index était trop grand */
	return (current);
}
