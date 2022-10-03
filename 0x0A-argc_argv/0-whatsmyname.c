#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * description: program that prints its name followed by a new line
 * without having to compile the program again
 * @argc: count agrguments
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
