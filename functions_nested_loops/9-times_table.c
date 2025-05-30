#include "main.h"

/**
 * times_table - prints the 9 time table
 */

void times_table(void)
{
	int number;
	int multiplier;
	int product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');
		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			_putchar(',');
			_putchar(' ');
			product = number * multiplier;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar ((product % 10) + '0');
		}
		_putchar('\n');
	}
}
