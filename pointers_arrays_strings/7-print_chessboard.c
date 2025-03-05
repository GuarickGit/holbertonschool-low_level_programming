#include "main.h"

/**
 * print_chessboard - prints a chessboard
 *
 * @a: pointer to a 2D array of 8x8
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++) /* parcours les lignes */
	{
		for (column = 0; column < 8; column++) /* parcours les colonnes */
		{
			_putchar(a[row][column]); /* affiche le caractère stocké */
		}
		_putchar('\n');
	}
}
