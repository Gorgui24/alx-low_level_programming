#include <stdio.h>
/**
 * main - print before main
 * Return: 0
 */
void printBeforeMain(void) __attribute__ ((constructor));
void printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature");
	printf(", challenges one to a race.)\n");
	return (0);
}
