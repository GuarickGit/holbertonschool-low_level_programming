#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings (can be NULL).
 * @n: The number of strings passed to the function.
 *
 * Description:
 * This function takes a variable number of string arguments and prints them.
 * If a string is NULL, "(nil)" is printed instead.
 * If separator is NULL, strings are printed without a separator.
 * A newline is printed at the end.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments; /* déclaration de la liste d'arguments variables */
	unsigned int i;
	char *current_string;

	/* initialisation de `va_list` pour parcourir les arguments */
	va_start(arguments, n);

	/* parcours des arguments */
	for (i = 0; i < n; i++)
	{
		/* récupération du prochain argument (string) */
		current_string = va_arg(arguments, char *);

		/* si la chaîne est NULL, on affiche "(nil)" */
		if (current_string == NULL)
		{
			printf("(nil)");
		}
		/* sinon, on print la string */
		else
		{
			printf("%s", current_string);
		}

		 /* affichage du séparateur uniquement s'il n'est pas NULL et que */
		 /* ce n'est pas le dernier élément */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	/* fermeture de la liste d'arguments variables */
	va_end(arguments);
}
