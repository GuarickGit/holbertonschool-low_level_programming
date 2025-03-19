#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 * @...: A variable number of arguments to be summed.
 *
 * Description: This function utilizes the va_list, va_start,
 * va_arg, and va_end macros to handle a variable number of arguments.
 * If n is 0, the function returns 0.
 *
 * Return: The sum of all parameters, or 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	unsigned int sum = 0;
	va_list arguments; /* déclaration de la liste des arguments variadiques */

	/* si 'n' est égale à 0, il n'y a aucun argument à add. on return 0 */
	if (n == 0)
		return (0);

	/* initialisation de la liste d'arguments avec va_start */
	va_start(arguments, n);

	/* boucle pour parcourir tous les arguments passés à la fonction */
	for(i = 0; i < n; i++)
	{
		/* va_arg récupère le prochain argument et l'ajoute à sum */
		sum += va_arg(arguments, int);
	}

	/* fermeture de la liste d'arguments, libérant ainsi la mémoire utilisée */
	va_end(arguments);

	/* retourne la somme totale des arguments */
	return(sum);
}
