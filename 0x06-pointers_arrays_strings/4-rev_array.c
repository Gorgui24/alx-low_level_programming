#include "main.h"
#include <string.h>

/**
 * reverse-array - reverse array int
 * @a: parameter 1
 * @n:parameter 2
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = n - 1;
	while (i >= 0)
	{
		if (j != i)
			printf(", ");
		printf("%d", s[i]);
		i--;	
	}
	printf("\n");

	
}
