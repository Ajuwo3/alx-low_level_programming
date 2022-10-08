#include "main.h"

/**
 * _isdigit - function that checks whether a character is s digit or not
 * @c: character tested
 * Return: 1 if it is, otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
