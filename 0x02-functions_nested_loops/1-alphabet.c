#include<stdio.h>
/**
 * main - print _putchar
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);

}

void print_alphabet(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
       putchar(ch +'0');	
}
}
