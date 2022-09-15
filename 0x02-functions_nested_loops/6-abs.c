#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the abxolute value of an integer
 * @c: integer to use value of the function
 * Return: Always 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
