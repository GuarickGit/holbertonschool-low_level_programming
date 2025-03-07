#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers passed as arguments
 *
 * @argc: number of arguments passed to the program
 * @argv: array containing the arguments as strings
 *
 * Return: 0 if success, 1 if an invalid character is found in the arguments
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	/* si aucun nombre n'est fourni (juste le nom du programme), afficher 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* parcours des arguments du programme */
	for (i = 1; i < argc; i++) /* start à 1 puisque argv[0] = nom du prog. */
	{
		/* vérification de chaque caractère de l'argument */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* si un caractère n'est pas un chiffre, print 'Error' et quitte */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* convertit l'argument en entier et l'ajoute à la somme */
		sum += atoi(argv[i]);
	}
	/* affiche le résultat */
	printf("%d\n", sum);
	return (0);
}
