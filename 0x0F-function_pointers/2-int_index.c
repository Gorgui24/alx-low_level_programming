#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * int_index - print array
 * @array: array parameter
 * @size: int parameter
 * @cmp: pointer parameter
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
