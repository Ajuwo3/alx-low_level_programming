#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @a: string
 * Return: Always 0
 */

char *rot13(char *a)
{
	int count = 0, s;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmnNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(a + count) != '\0')
	{
		for (s = 0; s < 52; s++)
		{
			if (*(a + count) == alphabets[s])
			{
				*(a + count) = rot13[s];
				break;
			}
		}
		count++;
	}
	return (s);
}
