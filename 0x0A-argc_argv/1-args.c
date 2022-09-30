#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * main - print name of program
 * @argv: string by line
 * @argc: number of line
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = argc - 1;
	(void) argv;
	_putchar(i + '0');
	_putchar('\n');
	return (0);
}
