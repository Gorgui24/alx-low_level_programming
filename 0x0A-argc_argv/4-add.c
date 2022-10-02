#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * main - print name of program
 * @argv: string by line
 * @argc: number of line
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 0)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
