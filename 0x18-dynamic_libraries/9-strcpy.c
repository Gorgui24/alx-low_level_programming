#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcpy - copy string
 *@dest: string to receive
 *@src: string to send
 *Return: pointer data
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
