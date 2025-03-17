#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to iterate over
 * @size: The number of elements in the array
 * @action: A pointer to the function to apply to each element
 *
 * Description: This function iterates over an array and applies the
 * function `action` to each of its elements. If `array` or `action`
 * is NULL, the function does nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* déclaration de 'i' avec 'size_t' pour correspondre au type de 'size'*/
	size_t i;

	/* si 'name' ou 'action' sont NULL, on return directement */
	if (array == NULL || action == NULL)
		return;

	/* on parcours le tableau et on applique 'action' sur chaque element */
	for (i = 0; i < size; i++)
		action(array[i]);
}
