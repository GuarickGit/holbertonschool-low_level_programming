#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created previously created
 * by your alloc_grid function
 *
 * @grid: pointer to the two-dimensional array to be freed
 * @height: number of rows in the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return; /* ne rien faire afin d'éviter les erreurs */

	for (i = 0; i < height; i++) /* suppression des lignes du tableau */
		free(grid[i]);

	free(grid); /* suppression du tableau */
}
