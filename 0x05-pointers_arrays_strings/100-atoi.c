#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_atoi - convert char to int
 *@s: pointer string
 *Return: pointerint
 */
int _atoi(char *s)
{
	int i, j = strlen(s), t;

	for (i = 0; i < j; i++)
	{
		t += (int)(s[i]);
	}
	return (t);
}
