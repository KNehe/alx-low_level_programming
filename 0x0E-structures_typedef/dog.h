#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Defines a struct dog
  * @name: Char pointer to name of the dog
  * @age:  Decimal value of dog's age
  * @owner: Char pointer to owner of dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
