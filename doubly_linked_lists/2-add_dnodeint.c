#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the list
 * @n: The value to insert in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Pointeur vers le nouveau nœud à ajouter en tête */
	dlistint_t *new_node;

	/* Allocation mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL); /* Échec de malloc */
	}

	/* Initialisation des membres du nouveau nœud */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* Si la liste n'est pas vide, update 'prev' de l'ancien premier nœud */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* update de la tête de liste pour qu’elle pointe vers le nouveau nœud */
	*head = new_node;

	/* Retourne l'adresse du nouveau nœud */
	return (new_node);
}
