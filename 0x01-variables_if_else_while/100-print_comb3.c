#include <stdio.h>

/**
 * main - print numeric
 *
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 8; m++)
		{
			putchar(m + '0');
			putchar(n + 'n');
			putchar(',');
			putchar(' ');
		}

	}
	return (0);
}

