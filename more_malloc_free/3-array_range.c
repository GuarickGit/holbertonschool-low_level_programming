#include "main.h"

/**
 * array_range - create an array of integers
 *
 * @min: minimal value
 * @max: maximum value
 *
 * Return: pointer to the array or NULL if fail
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	/* vérifie si min est plus grand que max */
	if (min > max)
		return (NULL);

	/* alloue la mémoire pour le tableau,
	 * (+1 pour inclure max, on ne veut pas la différence) */
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);

	/* remplit le tableau avec les valeurs de min à max */
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	/* retourne le tableau alloué */
	return (arr);
}
