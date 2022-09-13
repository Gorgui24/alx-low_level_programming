#include<stdio.h>

#include "main.h"
/**
 * main - print _putchar
 *
 * Return: 0
 */
int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch + '0');
	_putchar('\n');
	return (0);

}
