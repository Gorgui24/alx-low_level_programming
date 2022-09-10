#include <stdio.h>

/**
 * main - print the alphabet in lowercase except q and e 
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	for (ch = 'a'; a <= 'z'; a++)
	{
		if (ch != 'e' || ch != 'q')
			putchar(ch);
	}

	putchar('\n');
	return (0);
}
