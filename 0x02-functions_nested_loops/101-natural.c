#include <stdio.h>
/**
 * main - print sum to multiple of 5 and 3 less t 1024
 * Retun: 0
 */
int main(void)
{
	int mul, muls, sumf = 0, sums = 0, sumt;

	for (mul = 2; mul < 1024; mul++)
	{
		if ((mul % 3) == 0)
		{
			sumf += mul;
		}
	}
	for (muls = 2; muls < 1024; muls++)
	{
		if ((muls % 5) == 0)
		{
			sums += muls;
		}
	}
	sumt = sumf + sums;
	printf("%d\n", sumt);
	return (0);
}
