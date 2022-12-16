#include "main.h"
#include <string.h>

/**
 * _strcat - copy string
 * @dest: parameter to copy string
 * @src: parameter to send string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
