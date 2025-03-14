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

/*-------------------------------------------------*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/*-------------------------------------------------*/
#endif /* DOG_H */
