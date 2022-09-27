#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, c, d, l = 0, e = 0;

	for (b = 0; b < size; b++)
	{
		d = (b * size) + b;
		l += *(a + d);
	}
	for (c = 0; c < size; c++)
	{
		d = (c * size) + (size - 1 - c);
		e += *(a + d);
	}
	printf("%b, %b\n", l, e);
}
