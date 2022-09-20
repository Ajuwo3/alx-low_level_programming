#include "main.h"
#include <stdio.h>
#include <string.h>

/** rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
	int a, fmr, len =_strlen(s);

	for (a = 0; a < len / 2; a++)
	{
		fmr = *(s + a);
		*(s + a) = *(s + len -a -1);
		*(s + len - a -1) = fmr;
	}
}

/**
 * _strlen - function that returns the length of a string
 * @s: given strings
 * Return: the length of a given string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + leb) != '\0')
		len++;

	return (len);
}
