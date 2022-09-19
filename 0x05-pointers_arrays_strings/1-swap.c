#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps two values of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int one_value = *a;

	*a = *b;
	*b = one_value;
}
