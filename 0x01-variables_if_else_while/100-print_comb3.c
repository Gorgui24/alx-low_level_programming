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
		for (m = 1; m <= 9; m++)
		{
			if (m > n)
			{
				putchar(m + '0');
				putchar(n + '0');
				if (n != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}	
		}
		

	}
	return (0);
}
