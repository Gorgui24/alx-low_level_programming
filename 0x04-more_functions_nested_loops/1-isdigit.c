#include "main.h"
/**
 * _isdigit - print 1 or 0 depending to letter
 * @c: value to return
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
