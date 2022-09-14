#include "main.h"
/**
 * _islower - print 1 or 0 depending to letter
 * c: value to return
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	
	} 
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	_putchar('\n');
}
