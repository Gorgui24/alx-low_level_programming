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

	if (argc <= 0)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (1);
}
