#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: check c
 *
 * Return: if letter, lowercase or uppercase, return 1, else return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
