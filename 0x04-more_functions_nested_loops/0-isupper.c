#include "main.h"
/**
 * _isupper - print 1 or 0 depending to letter
 * @c: value to return
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
