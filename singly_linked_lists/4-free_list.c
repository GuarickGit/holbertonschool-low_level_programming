#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *tmp; /* Pointeur temporaire pour parcourir la liste */
	list_t *next; /* Pointeur vers le nœud suivant */

	tmp = head; /* Initialisation du parcours de la liste à partir de head */

	while (tmp != NULL) /* Tant qu'on n'est pas à la fin de la liste */
	{
		next = tmp->next; /* Sauvegarde du nœud suivant */
		free(tmp->str); /* Libération de la chaîne de caractères */
		free(tmp); /* Libération du nœud lui-même */
		tmp = next; /* Passage au nœud suivant */
	}
}
