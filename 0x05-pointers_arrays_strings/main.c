#include <stdio.h>
#include "main.h"
/**
 * main - print a to z
 *
 * Retun: 0
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	
	char s[10] = "My School";
	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);



	return (0);

}
