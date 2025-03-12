#include "main.h"
#include "dog.h"

/**
 * _strlen - Return the length of a string
 * @s: pointer to the string
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	/* parcours la chaîne caractère par caractère jusqu'à la fin ('\0') */
	while (s[i] != '\0')
		i++;
	return (i);
	/* code copier de '_strlen' du projet "pointers_array_string" */
}

/**
 * _strcpy - Copies a string into another buffer
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* copie chaque caractère de `src` dans `dest` jusqu'à rencontrer '\0' */
	while (src[i] != '\0')
	{
		dest[i] = src[i]; /* copie le caractère actuel */
		i++;
	}
	dest[i] = '\0'; /* ajoute le caractère de fin de chaîne */

	return (dest); /* retourne le pointeur vers `dest` */
	/* code inspiré de '_strncpy' du projet "pointers_array_string" */
}

/**
 * new_dog - creates a new dog and stores its information
 * @name: the dog's name (string)
 * @age: the dog's age (float)
 * @owner: the dog's owner's name (string)
 *
 * Return: a pointer to the newly created `dog_t` structure,
 * or NULL if memory allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	/* Vérifie que `name` et `owner` ne sont pas NULL */
	if (!name || !owner)
		return (NULL);

	/* allocation de mémoire pour la structure dog_t */
	ptr = malloc(sizeof(dog_t));
	if (!ptr) /* vérifie si l'allocation a échoué */
		return (NULL);

	/* allocation de mémoire pour stocker une copie du nom */
	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1)); /* +1 pour le \0 */
	if (!ptr->name) /* vérifie si l'allocation a échoué */
	{
		free(ptr); /* libère la structure déjà allouée */
		return (NULL);
	}

	/* allocation de mémoire pour stocker une copie du propriétaire */
	ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1)); /* +1 pour le \0 */
	if (!ptr->owner) /* vérifie si l'allocation a échoué */
	{
		free(ptr->name); /* libère la mémoire déjà allouée pour `name` */
		free(ptr); /* libère la structure déjà allouée */
		return (NULL);
	}

	/* copie les valeurs des chaînes de caractères dans la mémoire allouée */
	_strcpy(ptr->name, name); /* copie `name` dans `ptr->name` */
	_strcpy(ptr->owner, owner); /* copie `owner` dans `ptr->owner` */


	/* affecte l'âge du chien */
	ptr->age = age;

	/* retourne le pointeur vers la nouvelle structure `dog_t` */
	return (ptr);
}
