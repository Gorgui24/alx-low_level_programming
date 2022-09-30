#include "main.h"
#include<string.h>
/**
 * main - print name of program
 * @argc: number of program
 * @argv: string by line
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, j = strlen(argv[0]);
	char *s = argv[0];

	for (i = 0; j < j; i++)
		_putchar(s[i]);
	_putchar('\n');
	return (0);
}
