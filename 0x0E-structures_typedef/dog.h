#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents information about a dog.
 * @name: the name of he dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Description: this structure  defines the elements that store information
 * about a dog. it includes the dog's name, age and the name of its owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
