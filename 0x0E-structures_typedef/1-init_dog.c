#include "dog.h"
#include<stdlib.h>
/**
 * init_dog - struct
 * @d: struct parameter
 * @name: char parameter
 * @age: float parameter
 * @owner: char parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
