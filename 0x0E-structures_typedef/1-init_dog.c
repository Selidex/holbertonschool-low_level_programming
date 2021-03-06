#include "dog.h"

/**
 *init_dog - initalizes a struct dog
 *@d: dog dataname
 *@name: dogs actual name
 *@age: how old the dog is
 *@owner: name of the owner
 *Return: void no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	if (name != NULL)
		d->name = name;
	else
		d->name = NULL;
	d->age = age;
	if (owner != NULL)
		d->owner = owner;
	else
		d->owner = NULL;
}
