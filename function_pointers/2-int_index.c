#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a given function
 * @array: The array of integers
 * @size: The number of elements in the array
 * @cmp: A pointer to the function used to compare values
 *
 * Description: This function iterates through the array and applies the
 * function `cmp` to each element. It returns the index of the first element
 * for which `cmp` does not return 0. If no element matches, or if `size` is
 * less than or equal to 0, the function returns -1.
 *
 * Return: The index of the first matching element, or -1 if no match is found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* si 'array' ou 'cmp' sont NULL, on return directement */
	if (array == NULL || cmp == NULL)
		return (-1);

	/* si 'size' est négatif ou égale à 0, on return -1 */
	if (size <= 0)
		return (-1);

	/* on parcours le tableau et on applique la fonction 'cmp' */
	for (i = 0; i < size; i++)
	{
		/* si 'cmp' renvoie un résultat non nul, on retourne 'i' */
		if (cmp(array[i]) != 0)
		return (i);

	}
	/* si aucun élément ne correspond, on retourne -1 */
	return (-1);
}
