#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings 2
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (b == 0)
	{
		if ((*(s1 + a) == '\0') && (*(s2 + a) == '\0'))
			break;
		b = *(s1 + a) - *(s2 + a);
		a++;
	}
	return (b);
}
