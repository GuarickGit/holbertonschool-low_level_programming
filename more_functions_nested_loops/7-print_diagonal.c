#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int diag;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0; space < diag; space++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
}
