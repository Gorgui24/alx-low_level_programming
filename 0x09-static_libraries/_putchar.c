#include<stdio.h>
#include<unistd.h>
/**
 *
 * putchar print
 * @ch: char parameter
 * Return : 1
 */

char ch;
int _putchar(ch)
{
	return (write(1, &ch, 1));
}
