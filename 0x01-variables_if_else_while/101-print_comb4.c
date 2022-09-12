#include <stdio.h>

/**
 * main - print numeric
 *
 * Return: 0
 */
int main(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		for (m = 1; m <= 9; m++)
		{
			if (m > n)
			{
				for (p = 2; p <= 9; p++)
				{
					if (p > m)
					{
						putchar(n + '0');
						putchar(m + '0');
						putchar(p + '0');
						if (no != 7)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
