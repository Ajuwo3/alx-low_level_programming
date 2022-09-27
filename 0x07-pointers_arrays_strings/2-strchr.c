#include "main.h"

/**
 * _strchr - function that locates a character of string
 * @s: string to check
 * @c: character to check
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; *(s + a); a++)
	{
		if (*(s + a) == c)
			return (s + a);
	}
	if (*(s + a) == c)
		return (s + a);
	return (0);
}
