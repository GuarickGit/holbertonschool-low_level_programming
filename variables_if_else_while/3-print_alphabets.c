#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;
	char upperAlphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (upperAlphabet = 'A'; upperAlphabet <= 'Z'; upperAlphabet++)
	{
		putchar(upperAlphabet);
	}
	{
		putchar('\n');
	}
	return (0);
}
