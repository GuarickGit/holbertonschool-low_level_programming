#include <stdio.h>

/**
 * main - prints all arguments ir receives
 *
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}
