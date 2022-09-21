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

	i = 0;
	j = n - 1;
	while (j <= 0)
	{
		if (j != (n - 1)
		{
			printf(", ");
		}
		printf("%d", a[j]);
		i++;
		j--;
	}
	printf("\n");
}
