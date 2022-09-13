#ifndef main
#include<stdio.h>
void print_alphabet(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch + '0');
}

#define main
#endif
