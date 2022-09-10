#include <stdio.h>

/**
 * main - print z to a
 *
 * Return: 0
 */
int main(void)
{

	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);

	putchar('\n');
	return (0);
}
