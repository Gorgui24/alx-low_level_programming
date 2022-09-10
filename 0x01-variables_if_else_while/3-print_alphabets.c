#include <stdio.h>

/**
 * main - print a to z in uppercase and lowercase
 *
 * Return : 0
 *
 */
int main(void) 

{
	char l1, l2;
	
	for (l1 = 'a'; l1 <= 'z'; ++l1)
		puchar(l1);
	for (l2 = 'A'; l2 <= 'Z'; ++l2)
		puchar(l2);
	puchar('\n');

	return (0);
}

