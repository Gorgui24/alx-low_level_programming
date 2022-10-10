#ifndef DOG
#define DOG
/**
 * struct dog - define struct
 * @name: char pointer
 * @age: float type
 * @owner: char pointer
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
