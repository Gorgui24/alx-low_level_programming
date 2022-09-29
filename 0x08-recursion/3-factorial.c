#include "main.h"
#include<string.h>
/**
 * _factorial - number factorila
 * @n: integer parameter
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		n = - 1;
	}
	if (n == 0)
	{
		n = 1;
	}
	if (n > 0)
	{
		int i = factorial(n - 1);
		
		n = n * i;
	}
	return (n);
}
