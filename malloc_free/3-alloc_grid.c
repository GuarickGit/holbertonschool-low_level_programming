#include "main.h"

/**
 * alloc_grid - allocates a 2D array of integers initialized to 0
 *
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the allocated grid, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int row;
	int column;
	int **arrGrid;

	/* vérifie si width est 0 ou négatif */
	if (width <= 0)
		return (NULL);

	/* vérifie si height est 0 ou négatif */
	if (height <= 0)
		return (NULL);

	/* allocation de mémoire pour le tableau de pointeurs (lignes) */
	arrGrid = malloc(height * sizeof(int *));
	if (!arrGrid) /* vérification de l’échec de malloc */
		return (NULL);

	/* allocation de mémoire pour chaque ligne */
	for (row = 0; row < height; row++)
	{
		/* chaque ligne est un tableau d'entiers de taille 'width' */
		arrGrid[row] = malloc(width * sizeof(int));
		if (arrGrid[row] == NULL) /* vérification de l’échec de malloc */
		{
			/* libération de la mémoire déjà allouée avant de retourner NULL */
			while (--row >= 0) /* rollback pour free les lignes allouées */
				free(arrGrid[row]);
			free(arrGrid); /* free le tableau principal */

			return (NULL); /* retourne NULL pour indiquer l’échec */
		}

		/* initialisation de chaque élément de la grille à 0 */
		for (column = 0; column < width; column++)
			arrGrid[row][column] = 0;
	}

	/* retourne le pointeur vers la grille allouée et initialisée */
	return (arrGrid);
}

/*
 * Première allocation :
 *
 * arrGrid = malloc(height * sizeof(int *));
 * allocation d'un tableau de `height` pointeurs (`int **`).
 * chaque pointeur représentera une ligne de la grille.
 *
 * Deuxième allocation (pour chaque ligne) :
 *
 * arrGrid[row] = malloc(width * sizeof(int));
 * allocation d'un tableau de `width` entiers (`int *`).
 * ça permet d'accéder naturellement à `arrGrid[row][column]`.
*/
