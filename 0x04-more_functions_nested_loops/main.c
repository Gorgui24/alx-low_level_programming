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
	 more_numbers();
	 print_line(0);
	 print_line(2);
	 print_line(10);
	 print_line(-4);
	 return (0);
}
