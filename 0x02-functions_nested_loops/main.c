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
     
	return (0);

}
