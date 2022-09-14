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
		last_digit = num * -1;
	}
	else
	{
		last_digit = num;
	}
	_putchar('0' + last_digit);
	return (last_digit);

}
