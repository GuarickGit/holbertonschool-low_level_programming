#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: pointer to a square matrix stored in a linear array
 * @size: size of the matrix (size x size)
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)]; /* première diagonale */
		sum2 += a[(i + 1) * (size - 1)]; /* deuxième diagonale */
	}

	printf("%d, %d\n", sum1, sum2); /* affichage des résultats */
}
