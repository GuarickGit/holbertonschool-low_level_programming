#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing a dog
 * @name: dog's name (string)
 * @age: dog's age (in years)
 * @owner: dog's owner's name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
