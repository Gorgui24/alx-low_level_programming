#include <stdio.h>

/**
 * main - print numeric
 *
 * Return: 0
 */
int main(void)
{
	int num;
	
	for (num = 0; num < 10; num++) 
	{
		putchar((char)num);
	}
	putchar('\n');
	return (0);
}

