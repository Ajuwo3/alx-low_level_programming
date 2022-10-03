#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * description: program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = arc(argv[1]);
		b = arc(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
