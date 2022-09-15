#include "main.h"
/**
 * more_numbers - print 14 (a to z)
 * Return: return 0
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n <= 14; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	}
	_putchar('\n');
}
