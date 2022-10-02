#include<stdio.h>
#include<unistd.h>
/**
 *
 * putchar print
 * @ch: char parameter
 * Return : 1
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
