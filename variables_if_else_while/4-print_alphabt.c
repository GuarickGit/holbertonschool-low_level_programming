#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
	if (alphabt == 'e' || alphabt == 'q')
	{
		alphabt++;
	}
	putchar(alphabt);
	}
	putchar('\n');
	return (0);
}
