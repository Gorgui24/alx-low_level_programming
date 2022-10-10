#include "dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_dog - struct
 * @d: struct parameter
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);
	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);
	if ((*d).age == NULL)
		printf("(nil)\n");
	else
		printf("Age: %.1f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
}
