#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 *
 * Description:
 * This function takes a variable number of integer arguments and prints them.
 * If `separator` is NULL, numbers will be printed without a separator.
 * A newline is added at the end of the output.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments; /* déclaration de la liste d'arguments variables */
	unsigned int i;
	int num;

	/* initialisation de `va_list` pour parcourir les arguments */
	va_start(arguments, n);

	/* boucle pour parcourir tous les nombres passés */
	for (i = 0; i < n; i++)
	{
		/* récupération du prochain argument entier */
		num = va_arg(arguments, int);
		printf("%d", num);

		/* affichage du séparateur uniquement si ce n'est pas le dernier nombre */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	
	/* fermeture de la liste d'arguments variables */
	va_end(arguments);
}
