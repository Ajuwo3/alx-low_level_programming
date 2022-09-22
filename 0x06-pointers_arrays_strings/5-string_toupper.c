#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @a: input string
 * Return: to destination
 */

char *string_toupper(char *a)
{
	int count = 0;

	while (*(a + count) != '\0')
	{
		if ((*(a + count) >= 97) && (*(a + count) <= 122))
			*(a + count) = *(a + count) - 32;
		count++;
	}
	return (a);
}
