#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number to compute the factorial of.
 *
 * Return: The factorial of n. If n < 0, returns -1 to indicate an error.
 */

int factorial(int n)
{
	if (n == 0) /* cas de base */
		return (1);

	if (n < 0) /* cas d'erreur */
		return (-1);

	return (n * factorial(n - 1)); /* appel récursif */
}
