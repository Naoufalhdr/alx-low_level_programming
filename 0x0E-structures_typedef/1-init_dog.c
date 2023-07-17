#include "dog.h"

/**
 * init_dog - initializes a dog structure with provided values.
 * @d: a pointer to the dog structure to be initialized.
 * @name: a pointer to the name of the dog
 * @age: the age of the dog
 * @owner: a pointer to the name of the dog's owner
 *
 * Return: none.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

