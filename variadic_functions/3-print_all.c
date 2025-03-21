#include "variadic_functions.h"

/**
 * print_char - Affiche un caractère
 * @arguments: liste d'arguments variadiques
 */
void print_char(va_list arguments)
{
	/* les char deviennent des int dans les fonctions variadiques */
	printf("%c", va_arg(arguments, int));
}

/**
 * print_integer - Affiche un entier
 * @arguments: liste d'arguments variadiques
 */
void print_integer(va_list arguments)
{
	/* récupère et affiche un int */
	printf("%d", va_arg(arguments, int));
}

/**
 * print_float - Affiche un float (en tant que double)
 * @arguments: liste d'arguments variadiques
 */
void print_float(va_list arguments)
{
	/* les floats deviennent des doubles dans les fonctions variadiques */
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - Affiche une chaîne de caractères
 * @arguments: liste d'arguments variadiques
 */
void print_string(va_list arguments)
{
	/* èécupère une string (char *) */
	char *str = va_arg(arguments, char *);
	/* si la string est NULL, on affiche (nil) */
	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Affiche tout type de données selon un format donné
 * @format: chaîne de format contenant les types des arguments à afficher
 * 'c' = char, 'i' = int, 'f' = float, 's' = string
 */
void print_all(const char * const format, ...)
{
	va_list arguments; /* déclaration de la liste d'arguments variables */
	int i = 0;
	int index = 0;
	const char *valids = "cifs";
	void (*types[])(va_list) = {
		print_char, print_integer, print_float, print_string};
	char *separator = "";

	va_start(arguments, format);

	while (format && format[i])
	{
		index = 0;
		while (valids[index] && format[i] != valids[index])
		{
			index++;
		}

		if (valids[index])
		{
			printf("%s", separator);
			types[index](arguments);
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(arguments);
}
