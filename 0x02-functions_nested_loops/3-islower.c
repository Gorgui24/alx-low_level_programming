#include "main.h"
/**
 * _islower - print 1 or 0 depending to letter
 * c: value to return
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c <= 'a' && c >= 'z')
	{
		return (0);
	}
	else if (c <= 97 && c => 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
