#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define  TARGET 2772
#define MAX 90
#define MIN 33
/**
 *main - generate code
 *Return: 0
 */
int main(void)
{
	int chk = 0;

	srand(time(0));
	while (chk + MAX <= TARGET)
	{
		char rnd_ch = rand() % (MAX - MIN + 1) + MIN;

		if (TARGET - (chk + rnd_ch) <= MIN)
			continue;
		chk += (int) rnd_ch;
		printf("%c", rnd_ch);
	}
	printf("%c", TARGET - chk);
	return (0);
}
