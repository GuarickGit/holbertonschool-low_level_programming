#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 *
 * @s: pointer to the string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* condition d'arrêt */
	{
		return;
	}
	_print_rev_recursion(s + 1); /* appel récursif avec le caractère suivant */
	_putchar(*s); /* affichage du caractère après l'appel récursif */
}
