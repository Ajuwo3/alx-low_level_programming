#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}
	return (a);
}
