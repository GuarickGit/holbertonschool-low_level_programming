#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the details of a struct dog
 * @d: pointer to the struct dog to be printed
 */

void print_dog(struct dog *d)
{
	/* vérifie si le pointeur d est NULL, si oui ne rien afficher */
	if (d == NULL)
		return;

	/* vérifie si le nom est NULL, sinon l'affiche */
	if (d->name == NULL)
		printf("Name: (nil)\n");

	else
		printf("Name: %s\n", d->name);

	/* affiche l'âge du chien normalement (un float ne peut pas être NULL)*/
	printf("Age: %f\n", d->age);

	/* vérifie si le propriétaire est NULL, sinon l'affiche */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	else
		printf("Owner: %s\n", d->owner);
}
