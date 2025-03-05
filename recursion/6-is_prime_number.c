#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	/* un nombre inférieur ou égal à 1 n'est pas premier */
	if (n <= 1)
		return (0);
	/* 2 est un cas particulier, c'est le seul nombre premier pair */
	if (n == 2)
		return (1);
	/* appelle une fonction auxiliaire pour tester la divisibilité */
	return (is_divisible(n, 2));
}

/**
 * is_divisible - checks if a number is divisible by another
 *
 * @n: the number to check
 * @divisor: the current divisor being tested
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_divisible(int n, int divisor)
{
	/* si divisor * divisor dépasse n, alors n n'est divisible par rien */
	if (divisor * divisor > n)
		return (1);
	/* si n est divisible par divisor, alors ce n'est pas un nombre premier */
	if (n % divisor == 0)
		return (0);
	/* continue la vérification avec le diviseur suivant */
	return (is_divisible(n, divisor + 1));
}
