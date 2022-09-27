#include "main.h"
#include <stdio.h>

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
	int sum0, sum1 = 0, sum2 = 0;

	for (sum0 = 0; sum0 < size; sum0++)
	{
		sum1 += a[sum0];
		a += size;
	}
	a -= size;

	for (sum0 = 0; sum0 < size; sum++)
	{
		sum2 += a[sum0];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
