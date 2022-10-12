#include "function_pointers.h"
/**
 * print_name - return adress
 * @name: char parameter
 * @f: pointer paraameter
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
