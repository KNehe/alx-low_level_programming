#include "dog.h"

/**
  * init_dog - Initialzes a variable of type dog
  * @d: Pointer to struct dog
  * @name: Pointer to name dog
  * @age: Value of dog's age
  * @owner: Pointer to owner's name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age =  age;
	d->owner = owner;
	}
}
