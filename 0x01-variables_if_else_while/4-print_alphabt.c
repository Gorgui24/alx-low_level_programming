#include <stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 * 
 * Return: 0
 */
int main(void)
{
	char car = 'a';

	if (car != 'e' || car != 'q')
	{
		putchar(car);
		car++;
	}
	putchar('\n');
	return (0);
}
