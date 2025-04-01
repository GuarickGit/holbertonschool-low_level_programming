#include "lists.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: pointer to the string
 *
 * Return: the length of a string
 */

unsigned int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node; /* Pointeur vers le nouveau nœud à ajouter en tête */
	list_t *current;  /* Pointeur utilisé pour parcourir la liste */

	/* Allocation mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL); /* Échec de malloc */
	}
	/* Duplication de la chaîne passée en argument */
	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node); /* Libération du nœud en cas d’échec de strdup */
		return (NULL);
	}
	/* Calcul de la longueur de la chaîne et affectation au membre len */
	new_node->len = _strlen(str);
	/* Le nouveau nœud ne pointe vers rien, car il sera le dernier */
	new_node->next = NULL;
	/* Si la liste est vide, le nouveau nœud devient la tête */
	if (*head == NULL)
		*head = new_node;

	else
	{
		current = *head; /* Sinon, on parcourt la liste jusqu'au dernier nœud */

		while (current->next != NULL)
			current = current->next;
		current->next = new_node; /* On attache le nouveau nœud à la fin */
	}
	/* Retourne l'adresse du nouveau nœud */
	return (new_node);
}
