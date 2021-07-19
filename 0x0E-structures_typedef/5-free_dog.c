#include "dog.h"
#include "stdlib.h"
/**
  * free_dog - Frees space occupied by struct dog
  * @d: Pointer to struct dog
  * Return: void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
