#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings 2
 * @dest: destination of string
 * @src: source of string
 * @n: bytes amount
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count1 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count1 < n)
	{
		*(dest + count) = *(src + count1);
		if (*(src + count1) == '\0')
			break;
		count++;
		count1++;
	}
	return (dest);
}
