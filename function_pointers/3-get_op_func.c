#include "3-calc.h"

/**
 * get_op_func - Selects the correct function based on the operator
 * @s: The operator passed as argument
 *
 * Description: This function compares the given operator with the list
 * of available operations and returns the corresponding function pointer.
 * If no match is found, it returns NULL.
 *
 * Return: A pointer to the matching function, or NULL if no match is found.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	/* tableau contenant les opérateurs et les fonctions correspondantes */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /* marqueur de fin pour signaler la fin du tableau */
	};

	/*
	 * parcourt le tableau `ops[]` pour trouver l'opérateur correspondant
	 * `ops[i].op != NULL` vérifie que l'on n'a pas atteint la fin du tableau
	 * `strcmp(s, ops[i].op) != 0` compare `s` avec l'opérateur dans `ops[i].op`
	 * si `strcmp()` return 0, donc `s` = à `ops[i].op`, fin de la boucle
	 * sinon, on continue à incrémenter `i` pour tester l'opérateur suivant.
	*/
	while (ops[i].op != NULL && strcmp(s, ops[i].op) != 0)
		i++;

	/*
	 * retourne la fonction associée si un opérateur est trouvé,
	 * sinon retourne NULL
	 */
	return (ops[i].f);
}
