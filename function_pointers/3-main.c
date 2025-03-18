#include "function_pointers.h"
#include "calc.h"

/**
 * main - Entry point of the calculator program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings representing the arguments
 *
 * Description: This program performs a simple arithmetic operation based on
 * user input. It takes three arguments: a number, an operator, and another
 * number. It then determines the correct function using `get_op_func()`,
 * executes the operation, and prints the result. If the input is invalid,
 * it prints "Error" and exits with a specific status code.
 *
 * Return: 0 on success, or exits with an error code:
 * - 98 if the number of arguments is incorrect
 * - 99 if the operator is invalid
 * - 100 if there is an attempt to divide by zero
 */

int main(int argc, char *argv[])
{
	int num1, num2, results;
	int (*operation)(int, int); /*Ptr vers la fonction matchant à l'opérateur*/

	/* vérification du nombre d'arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* conversion des arguments en entiers */
	num1 = atoi(argv[1]); /* convertit le premier argument en entier */
	num2 = atoi(argv[3]); /* convertit le troisième argument en entier */

	/* récupération de la fonction correspondant à l'opérateur */
	operation = get_op_func(argv[2]); /* recherche la fonction lié à argv[2] */

	/* vérif de la validité de l'opérateur et gestion de la '/' et '%' par 0 */
	if (!operation || ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0))
	{
		printf("Error\n");
		exit(operation ? 100 : 99);
		/* '99' pour opérateur invalide, '100' pour division par 0 */
	}

	/* exécution de l'opération et affichage du résultat */
	results = operation(num1, num2); /*call la fonction pointée par `operation`*/
	printf("%d\n", results);

	return (0);
}
