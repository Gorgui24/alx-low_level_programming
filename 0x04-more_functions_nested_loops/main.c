#include<stdio.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Retun: Alwaays 0
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));

	 c = '0';
	 printf("%c: %d\n", c, _isdigit(c));
	 c = 'a';
	 printf("%c: %d\n", c, _isdigit(c));
	
	 printf("%d\n", mul(98, 1024));
	 printf("%d\n", mul(-402, 4096));
	 print_numbers();
	 print_most_numbers();
	 _putchar('\n');
	 return (0);
}
