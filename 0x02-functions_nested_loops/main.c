#include "main.h"
/**
 * main - print a to z
 *
 * Retun: 0
 */
int main(void)
{
	print_alphabet();
	print_alphabet_x10();
	
	int r;
	
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
       	_putchar(r + '0');
	r = _islower(108);
       	_putchar(r + '0');

	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	r = print_sign(0);
	_putchar(',');

        _putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);

	_putchar('\n')
	return (0);

}
