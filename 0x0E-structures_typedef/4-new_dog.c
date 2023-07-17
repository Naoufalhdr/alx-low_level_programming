#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copies a string from source to destination
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 *
 * Return: a pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

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

	if (name == NULL || owner == NULL)
		return (NULL);

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
		return (NULL);

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
