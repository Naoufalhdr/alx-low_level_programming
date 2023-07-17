#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dod struct of type dog.
 * @name: a pointer to the name of the dog.
 * @age: age of the dog.
 * @owner: a pointer to the name of the dog owner.
 *
 * Return: a pointer to the newyly created dog structure. or NULL if fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len = 0;
	int owner_len = 0;
	int i;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc((name_len + 1) * sizeof(char));
	new_dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		new_dog->name[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;

	return (new_dog);
}
