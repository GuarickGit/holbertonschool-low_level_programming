#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* Tant qu'on n'est pas à la fin de la liste */
	while (h != NULL)
	{
		/* Si le membre 'str' est NULL, on affiche [0] (nil) */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		/* Sinon, on affiche la longueur et la chaîne de caractères */
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		/* On incrémente le compteur */
		count++;

		/* On passe au noeud suivant */
		h = h->next;
	}

	/* On retourne le nombre total de nœuds */
	return (count);
}
