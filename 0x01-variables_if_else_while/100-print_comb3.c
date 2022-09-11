#include <stdio.h>

/**
 * main - print numeric
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
		putchar(n + '0');
		putchar(m + '0');		
		}
		putchar(',');
		putchar(' ');

	}
	return (0);
}

