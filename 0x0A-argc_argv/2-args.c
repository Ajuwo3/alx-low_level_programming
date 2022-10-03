#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * description: program that that prints all agruments it receives
 * including the first one
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count;


	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
