#include <stdio.h>

/**
 * main - print numeric
 *
 * Return: 0
 */
int main(void)
{
	int n;
	
	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		if (n == 9)
			putchar('$');
	}
	
	return (0);
}

