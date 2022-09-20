#include "main.h"
#include <stdio.h>
#include <string.h>i
/**
 * *_strcpy - print string
 *@dest: string to receive copy
 *@src: string to send copy
 */
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(dest, src);
	return (dest);
}
