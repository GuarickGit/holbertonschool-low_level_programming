#include "lists.h"

/**
 * sum_dlistint - Returns the sum of the data (n) of a dlistint_t linked list
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: The sum of all the data (n), or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	/* On parcourt la liste depuis le début */
	while (current != NULL)
	{
		sum += current->n; /* On ajoute la valeur du champ n à la somme */
		current = current->next; /* On passe au nœud suivant */
	}
	/* On retourne la somme totale, ou 0 si la liste était vide */
	return (sum);
}
