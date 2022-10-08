#include "main.h"

/**
 * _strpbrk - function that searches for any of a set of bytes
 * @s: string to be checked
 * @accept: string to check for
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for  (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (accept[b])
			return (s + a);
	}
	return (0);
}
