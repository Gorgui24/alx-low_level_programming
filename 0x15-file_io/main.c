#include <stdio.h>
#include "main.h"
/**
 * main - print a to z
 *
 * Retun: 0
 */
int main(void)
{
char *s;

s = _strdup(NULL);
if (s == NULL)
{
	printf("failed to allocate memory\n");
	return (1);
}
free(s);
return (0);
}
