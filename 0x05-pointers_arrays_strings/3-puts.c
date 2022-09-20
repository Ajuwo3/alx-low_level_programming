#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - function that prints a string
 * @str: string to be printed
 * Description: printa string
 * Return: Always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(20);
}
