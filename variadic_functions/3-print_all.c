#include "variadic_functions.h"

/**
 * print_char - Affiche un caractère
 * @arguments: liste d'arguments variadiques
 */
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int)); /* les Char deviennent des Int */
}

/**
 * print_integer - Affiche un entier
 * @arguments: liste d'arguments variadiques
 */
void print_integer(va_list arguments)
{
	printf("%d", va_arg(arguments, int)); /* récupère un Int*/
}

/**
 * print_float - Affiche un float (en tant que double)
 * @arguments: liste d'arguments variadiques
 */
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double)); /* les Float deviennent des Doubles*/
}

/**
 * print_string - Affiche une chaîne de caractères
 * @arguments: liste d'arguments variadiques
 */
void print_string(va_list arguments)
{
	char *str = va_arg(arguments, char *); /* récupère un pointeur vers Char */

	if (!str) /* si la string est NULL, on affiche (nil) */
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
	va_list arguments;
	int i = 0;
	int j;
	const char *valids = "cifs";
	void (*types[])(va_list) = {print_char, print_integer, print_float, print_string};
	char *separator = "";

	va_start(arguments, format);

	while (format && format[i])
	{
		if(strchr(valids, format[i]))
		{
			j = strchr(valids, format[i]) - valids;
			printf("%s", separator);
			types[j](arguments);

			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(arguments);
}
