#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: a pointer to a function that takes a char * as parameter
 *
 * description: This function takes a string `name` and a function
 * `f`, then calls `f` with `name` as argument. If `name` or `f` is
 * NULL, the function does nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	/* si 'name' ou 'f' sont NULL, on return directement */
	if (name == NULL || f == NULL)
		return;

	/* appel de la fonction 'f' avec 'name' en argument */
	f(name);
}
