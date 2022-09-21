#include "main.h"
#include <string.h>

/**
 * _strncat - copy string
 * @dest: parameter to copy string
 * @src: parameter to send string
 * n: string to copy
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
