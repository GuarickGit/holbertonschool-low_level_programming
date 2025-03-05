#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: the base number
 * @y: the exponent
 *
 * Return: the result of x raised to the power y
 * if y is lower than 0, retuns -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0) /* cas de base : x^0 = 1 */
		return (1);

	if (y < 0) /* cas d'erreur : exponent négatif */
		return (-1);

	return (x * _pow_recursion(x, y - 1)); /* appel récursif */
}
