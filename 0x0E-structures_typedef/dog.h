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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
