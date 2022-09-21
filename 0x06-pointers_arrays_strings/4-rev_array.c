#include "main.h"
#include <string.h>

/**
 * reverse_array - revers array
 * @a: parameter 1
 * @n: parameter 2
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (n <= 0)
	{
		if (i != 0)
		{
			printf(", ");
		}
		 printf("%d", a[i]);
		 n--;
		 i++;
	}
}
