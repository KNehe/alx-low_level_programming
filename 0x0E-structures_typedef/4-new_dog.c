#include "dog.h"
#include "stdio.h"
#include "stdlib.h"
/**
  * new_dog - Creates a new dog
  * @name: Pointer to dog's name
  * @age: Age
  * @owner: Pointer to owner's name
  * Return: Pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, own_len, i;

	name_len = 0;
	own_len = 0;

	while (name[name_len] != '\0')
		name_len++;

	while (owner[own_len] != '\0')
		own_len++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(name_len * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		dog->name[i] = name[i];
	dog->age = age;
	dog->owner = malloc(own_len * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= own_len; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
