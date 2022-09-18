#include <stdio.h>
/**
 * main - print sum to multiple of 5 and 3 less t 1024
 * Retun: 0
 */
int main(void)
{
	int mul, sumf = 0, sums = 0, sumt;

	for (mul = 2; mul < 1024; mul++)
	{
		if ((mul % 3) == 0)
		{
			sumf += mul;
		}
		if ((mul % 5) == 0)
		{
			sums += mul;
		}
	}
	sumt = sumf + sums;
	printf("%d\n", sumt);
	return (0);
}
