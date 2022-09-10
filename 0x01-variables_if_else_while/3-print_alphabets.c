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
	char l1, l2;
	
	for (l1 = 'a'; l1 <= 'z'; ++l1)
		putchar(l1);
	for (l2 = 'A'; l2 <= 'Z'; ++l2)
		putchar(l2);
	putchar('\n');

	return (0);
}

