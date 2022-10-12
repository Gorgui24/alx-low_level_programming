#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - print array
 * @array: array parameter
 * @size: int parameter
 * @action: pointer parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (!array || !action)
		return;
	size = sizeof(array);
	for (i = 0; i < size; i++)
		action(array[i]);

}
