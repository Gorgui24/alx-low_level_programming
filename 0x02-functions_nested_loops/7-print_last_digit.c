#include "main.h"
/**
 * print_last_digit - print print last digit of number
 * @num: convert number if ti's positive
 * Return: 0
 */
int print_last_digit(int num)
{
	_putchar(num % 10 + '0');
	return (num % 10);

}
