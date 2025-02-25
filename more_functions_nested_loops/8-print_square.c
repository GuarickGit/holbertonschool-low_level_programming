#include "main.h"

/**
 * print_square - print a square
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int lines;
	int num;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (num = 0; num < size; num++)
	{
		for (lines = 1; lines < size; lines++)
		{
			_putchar(35);
		}
		_putchar(35);
		_putchar('\n');
	}
}
