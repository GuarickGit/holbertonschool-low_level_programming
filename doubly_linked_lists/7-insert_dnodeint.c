#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the doubly linked list
 * @idx: Index at which the new node should be added (starting from 0)
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed or index is out range
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int count = 0;
	/* Cas particulier : insertion au début de la liste */
	if (idx == 0)
		/* On réutilise la fonction existante pour insérer en tête */
		return (add_dnodeint(h, n));
	/* Parcours de la liste jusqu'au nœud juste avant l'index voulu */
	while (current != NULL && count < idx - 1)
	{
		current = current->next; /* On avance d'un nœud */
		count++; /* On compte la position */
	}
	/* Si on arrive à la fin avant d'atteindre l'index -1,l'index est invalide */
	if (current == NULL)
		return (NULL);

	/* Allocation mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL); /* Échec de malloc */
	/* Initialisation des membres du nouveau nœud */
	new_node->n = n; /* On stocke la valeur */
	new_node->prev = current; /* Il vient après current */
	new_node->next = current->next; /* pointe vers l'ancien suivant de current */
	/* Mise à jour du nœud suivant si il existe */
	if (current->next != NULL)
		/* L'ancien suivant de current doit pointer en arrière vers le new_node */
		current->next->prev = new_node;
	/* On insère le nouveau nœud après current */
	current->next = new_node;
	/* Retourne le pointeur vers le nouveau nœud */
	return (new_node);
}

/*
 * Line 42:
 *
 * On met à jour le champ 'prev' du nœud qui venait après 'current'
 * pour qu'il pointe désormais vers le nouveau nœud.
 * Cela permet de garder la liaison arrière correcte :
 * [current] <--> [new_node] <--> [ancien_suivant]
 *
 * Merci ChatGPT !
 */
