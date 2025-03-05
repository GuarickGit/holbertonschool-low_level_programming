#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: pointer to a string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* si on atteint la fin de la chaine */
	{
		_putchar('\n');
		return; /* arrête l'exécution de la fonction */
	}
	_putchar(*s); /* affiche le premier caractère */
	_puts_recursion(s + 1); /* appelle la fonction avec le caractère suivant */
}
