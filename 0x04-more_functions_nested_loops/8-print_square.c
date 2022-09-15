#include "main.h"i
/**
 * print_square - print square '#'
 * @size: parmater that define size square of '#' to print
 */
void print_square(int size)
{
	int count = 1;

	if (size >= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (size >= count)
		{
			int i = 1;

			while (n >= i)
			{
				_putchar('#');
				i++;
			}
			count++;
			_putchar('\n');
		}
	}
}
