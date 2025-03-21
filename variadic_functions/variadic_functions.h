#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct type_handler - Structure qui associe un caractère de type
 * à une fonction capable d'afficher cet argument
 * @symbol: le caractère représentant le type (ex: 'c', 'i', 'f', 's')
 * @print_func: pointeur vers la fonction qui affiche ce type
 */
typedef struct type_handler
{
	char symbol;
	void (*print_func)(va_list arguments);
} type_handler;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
