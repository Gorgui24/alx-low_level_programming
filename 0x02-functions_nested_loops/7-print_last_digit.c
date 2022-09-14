#include "main.h"
/**
 * print_last_digit - print print last digit of number
 * @num: convert number if ti's positive
 * Return: 0
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (num < 0)
	{
		last_digit = last_digit * -1;
	}
	else
	{
		last_digit = num % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);

}
