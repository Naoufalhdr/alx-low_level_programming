#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @str: a pointer to the input string
 *
 * Return: Length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

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

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
	new_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	new_dog->age = age;
	_strcpy(new_dog->owner, owner);

	return (new_dog);
}
