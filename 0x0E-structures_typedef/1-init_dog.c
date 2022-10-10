#include "dog.h"
/**
 * malloc_checked - return adress
 * @b: int parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
