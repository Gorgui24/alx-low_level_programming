#include "main.h"
/**
 * main - print a to z
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
}
void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch >= 'z'; ch++)
		_putchar(ch);

}
