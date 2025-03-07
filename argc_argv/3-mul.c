#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	/* vérifie si le programme reçoit exactement 2 arguments */
	if (argc != 3)
	{
		printf("Error\n"); /* affiche 'error' si incorrect */
		return (1); /* retourne 1 pour indiquer une erreur */
	}

	/* convertit les argu. de type 'str' en 'int' | Atoi = ASCII to Integer */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* affiche le résultat de la multiplication */
	printf("%d\n", num1 * num2);

	return (0);
}
