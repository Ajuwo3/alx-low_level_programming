#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @a: string
 * Return: Always 0
 */

char *cap_string(char *a)
{
	int count = 0, s;
	int alx[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(a + count) >= 97 && *(a + count) <= 122)
		*(a + count) = *(a + count) - 32;
	count++;
	while (*(a + count) != '\0')
	{
		for (s = 0; s < 13; s++)
		{
			if (*(a + count) == alx[s])
			{
				if ((*(a + (count + 1)) >= 97) && (*(a + (count + 1)) <= 122))
					*(a + (count + 1)) = *(a + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (a);
}
