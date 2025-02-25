#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int loop;
	int num;

	if (size > 0)
	{
		for (loop = 1; loop <= size; loop++)
		{
			for (num = size - loop; num > 0; num--)
				_putchar(' ');

			for (num = 0; num < loop; num++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
