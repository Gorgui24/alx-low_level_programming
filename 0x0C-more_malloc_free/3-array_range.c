#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * array_range - return adress
 * @min: int parameter
 * @max: int parameter
 * Return: pointer address
 */
int *array_range(int min, int max)
{
	int *ch;
	int i = 0, n = min;

	if (min > max)
		return (NULL);

	ch = malloc((max - min + 1) * sizeof(int));

	if (ch == NULL)
		return (NULL);
	while (n <= max - min)
	{
		ch[i++] = n++;
	}
	return (ch);
}
