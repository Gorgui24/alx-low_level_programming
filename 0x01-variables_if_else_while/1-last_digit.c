#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print with condition
 *
 * Return: 0
 *
 */
int main(void)
{
	int num, ld;

	srand(time(0));
	num = rand() - RAND_MAX / 2;
	ld = num % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", num,ld);
	if (ld == 0)
		printf("Last digit of %d is %d and is 0\n", num, ld);
	if (ld < 6 && ld != 0)
		printf("Last digit of %d n is %d and is less than 6 and not 0", num, ld);
	
	return (0);
}
