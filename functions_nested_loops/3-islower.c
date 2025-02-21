#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: check c
 *
 * Return: if lowercase, return 1, else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
