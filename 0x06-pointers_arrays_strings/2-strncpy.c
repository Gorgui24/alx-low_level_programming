#include "main.h"
#include <string.h>

/**
 * _strncpy - copy string
 * @dest: parameter 1
 * @src: parameter 2
 * @n:parameter3
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncopy(dest, src, n);
	return (dest);
}
