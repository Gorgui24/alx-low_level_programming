#include <stdio.h>

/**
 * main - print the alphabet in lowercase except q and e
 * 
 * Return: 0
 *
 *
 */

int main(void)
{
	char car;
	for (car = 'a'; car < 'e'; car++)
		putchar(car);
	for (car = 'f'; car < 'q'; car++)
		putchar(car);
	for (car = 'r'; car <= 'z'; car++)
		putchar(car); 
	putchar('\n');

}

