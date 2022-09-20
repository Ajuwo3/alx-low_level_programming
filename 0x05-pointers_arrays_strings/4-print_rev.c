#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - funtion that print string in reverse
 * @s: String to be reversed
 * Return: Always 0
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(20);
}
