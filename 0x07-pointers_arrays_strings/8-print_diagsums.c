#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;

	int i = 0;
	int j = 0;

	for (k = 0; k < size; k++)
	{
		i = i + a[k * size + k];
	}

	for (k = size - 1; k >= 0; k--)
	{
		j += a[k * size + (size - k 1)];
	}

	printf("%d, %d\n", i, k);
}
