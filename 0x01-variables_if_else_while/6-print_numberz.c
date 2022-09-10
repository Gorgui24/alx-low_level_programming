#include <stdio.h>

/**
 * main - print numeric
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char ch;
	for (num = 0; num < 10; num++) 
	{
		ch = char(num);
		putchar(ch);
	}
	putchar('\n');
	
	return (0);
}

