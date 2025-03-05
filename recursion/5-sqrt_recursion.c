#include "main.h"

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: The number for which we need to find the square root
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
	/* si n est négatif, il n'a pas de racine carrée naturelle */
	if (n < 0)
		return (-1);
/* si n est 0 ou 1, sa racine carrée est lui-même */
	if (n == 0 || n == 1)
		return (n);
/* appel de la fonction auxiliaire en commençant la recherche avec x = 1 */
		return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Recursive helper function to find the square root
 * @n: The number whose square root is being searched
 * @x: The candidate for the square root (starts at 1 and increases)
 *
 * Return: The square root of n if it exists, otherwise -1
 */

int find_sqrt(int n, int x)
{
	/* si x^2 dépasse n, alors n n'a pas de racine carrée naturelle */
	if (x * x > n)
		return (-1);
	/* si x^2 est égal à n, alors x est la racine carrée */
	if (x * x == n)
		return (x);
	/* sinon, on continue la recherche en testant x + 1 */
	return (find_sqrt(n, x + 1));
}

