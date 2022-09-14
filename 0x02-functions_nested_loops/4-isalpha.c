#include "main.h"
/**
 * _isalpha - print 1 or 0 depending to letter
 * @c: value to return
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z'))
		c = 1;
	
	else
		c = 0;

	return (c);
}
