#include <stdio.h>
/**
 * printBeforeMain - print before main
 */
void printBeforeMain(void) __attribute__ ((constructor));

void printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
