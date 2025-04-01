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
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	/* Pointeur vers le nouveau nœud à ajouter en tête */
	list_t *new_node;

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

	/* Le nouveau nœud pointe vers l'ancienne tête de liste */
	new_node->next = *head;

	/* Mise à jour de la tête de liste pour qu’elle pointe vers le nouveau nœud */
	*head = new_node;

	/* Retourne l'adresse du nouveau nœud */
	return (new_node);
}
