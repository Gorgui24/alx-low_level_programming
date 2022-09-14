#include "main.h"
/**
 * print_alphabet_x10 - function to print x10 (a to z)
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
		_putchar('\n');
	}
	_putchar('\n');
}
