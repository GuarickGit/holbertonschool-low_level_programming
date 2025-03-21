#include "variadic_functions.h"

/**
 * print_char - affiche un caractère
 * @arguments: liste d'arguments variadiques
 */
void print_char(va_list arguments)
{
	/* les char deviennent des int dans les fonctions variadiques */
	printf("%c", va_arg(arguments, int));
}

/**
 * print_int - affiche un entier
 * @arguments: liste d'arguments variadiques
 */
void print_int(va_list arguments)
{
	/* récupère et affiche un int */
	printf("%d", va_arg(arguments, int));
}

/**
 * print_float - affiche un float (en fait un double ici)
 * @arguments: liste d'arguments variadiques
 */
void print_float(va_list arguments)
{
	/* les floats deviennent des doubles dans les fonctions variadiques */
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - affiche une chaîne de caractères
 * @arguments: liste d'arguments variadiques
 */
void print_string(va_list arguments)
{
	/* récupère une string (char *) */
	char *str = va_arg(arguments, char *);
	/* si la string est NULL, on affiche (nil) */
	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - fonction qui affiche tout, selon les types passés dans "format"
 * @format: chaîne de caractères indiquant les types des arguments
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0,
	j;
	char *sep = "";

	/* tableau associant types et fonctions de print */
	type_handler handlers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(arguments, format); /* initialisation de la liste variadique */

	while (format && format[i]) /* on parcourt la chaîne "format" */
	{
		j = 0;
		while (j < 4) /* on cherche si le type est reconnu */
		{
			if (format[i] == handlers[j].symbol)
			{
				printf("%s", sep); /* on affiche le séparateur (rien au début) */
				handlers[j].print_func(arguments); /* on appelle la bonne fonction */
				sep = ", "; /* à partir du 2e élément, on met une virgule */
				break; /* on sort du while une fois le type trouvé */
			}
			j++;
		}
		i++; /* on passe au caractère suivant dans "format" */
	}

	va_end(arguments); /* on nettoie la liste variadique */
	printf("\n"); /* on ajoute le saut de ligne final */
}
