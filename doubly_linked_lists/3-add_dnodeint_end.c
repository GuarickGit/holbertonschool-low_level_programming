#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the list
 * @n: The integer value to store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* Pointeur vers le nouveau nœud à ajouter en tête */
	dlistint_t *new_node;
	/* Pointeur temporaire pour parcourir la liste */
	dlistint_t *last;

	/* Allocation mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL); /* Échec de malloc */
	}

	/* Initialisation des membres du nouveau nœud */
	new_node->n = n;
	new_node->next = NULL;

	/* Si la liste est vide, le nouveau nœud devient la tête */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;

		return (new_node);
	}

	/* Sinon, parcourir la liste jusqu'au dernier nœud */
	last = *head;

	while (last->next != NULL)
		last = last->next;

	/* Ajouter le nouveau nœud à la fin */
	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
