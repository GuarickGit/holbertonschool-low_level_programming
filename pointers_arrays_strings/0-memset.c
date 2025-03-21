#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to be filled
 * @b: the constant byte
 * @n: the numbers of byte to fill
 *
 * Return: pointer to the area memory s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
