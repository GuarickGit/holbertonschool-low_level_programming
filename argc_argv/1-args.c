#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 *
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments (unused in this program)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /* inutilisé dans ce code, betty veut qu'on l'indique */
	printf("%d\n", argc - 1);

	return (0);

}
