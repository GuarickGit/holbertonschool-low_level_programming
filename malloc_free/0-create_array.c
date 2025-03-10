#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and init. it with a specific char
 *
 * @size: the size of the array to be created
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if size = 0 or if memo. alloc. fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
