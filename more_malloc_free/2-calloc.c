#include "main.h"

/**
 * _calloc - a modifier
 *
 * @nmemb: a modifier
 * @size: a modifier
 *
 * Return: a modifier
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (!arr)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		((char *)arr)[i] = 0;

	return (arr);

}
