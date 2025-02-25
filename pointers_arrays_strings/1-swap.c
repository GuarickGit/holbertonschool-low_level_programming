#include "main.h"

/**
 * swap_int - swap value of two integers
 *
 * @a: first integer (pointer)
 *
 * @b: second integer (pointer)
 */

void swap_int(int *a, int *b)
{

/* declare variable tempo et prends la valeur dans l'adresse pointee par a */
	int temp = *a;

/* valeur dans adresse pointee par a -> valeur dans adresse pointee par b */
	*a = *b;

/* valeur dans adresse pointee par b -> valeur stockee dans temp, donc *a */
	*b = temp;
}
