#include<stdio>
/**
 *
 * putchar print
 */

char ch;
void _putchar(ch)
{
	putchar(ch);

}
void print_alphabet(void)
{
	for (ch = 'a'; ch <= 'z'; ch ++)
	{
		_putchar(ch);
	}
}
