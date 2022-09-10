#include <stdio.h>

/**
 * main - print a to z in uppercase and lowercase
 *
 * Description : using the main function
 * This programm print a to z
 * Return  : 0
 */
int main(void) 
{
	char ch;
	int num = 0;
	char chn = num + '0';

	for (num = 0; num < 10; ++num)
		putchar(chn);
	for (ch = 'a'; ch <= 'f'; ++ch)
		putchar(ch);
	putchar('\n');

	return (0);
}

