#include "main.h"
#include<string.h>
/**
 * _pow_recursion - number factorial
 * @x: integer parameter
 * @y: integer parameter
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0 || x == 1)
	{
		return (1);
	}
	return (x * x);
	_pow_recursion(x, y - 1);
}
