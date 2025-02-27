#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 *
 * @a: the array of integers
 *
 * @n: the number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]); /* affichage de l'element */

		if (i < n - 1) /* ajouter ", " sauf pour le dernier element */
			printf(", ");
	}
	printf("\n");
}
