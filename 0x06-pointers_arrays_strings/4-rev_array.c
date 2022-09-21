#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - revers array
 * @a: parameter 1
 * @n: parameter 2
 */
void reverse_array(int *a, int n)
{
	int i, j;

	j = n - 1;
	i = j;
	while (j >= 0)
	{
		if (j != i)
		{
			printf(", ");
		}
		printf("%d", a[j]);
		j--;
	}
	printf("\n");
}
