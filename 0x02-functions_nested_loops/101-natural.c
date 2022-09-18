#include <stdio.h>
/**
 * main - print sum to multiple of 5 and 3 less t 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int mul, sumf = 0;

	for (mul = 2; mul < 1024; ++mul)
	{
		if (((mul % 3) == 0) || ((mul % 5) == 0))
		{
			sumf += mul;
		}
	}
	printf("%d\n", sumf);
	return (0);
}
