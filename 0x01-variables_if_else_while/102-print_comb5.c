#include <stdio.h>
#include <unistd.h>
/**
 * main - print a possible combination of two two digit numbers.
 * Description: Entry point.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i, k, j;

	for (c = 50; c <= 59; c++)
	{
		for (i = 50; k <= 59; k++)
		{
			for (j = 50; j <= 59; j++)
			{
				for (k = 50; k <= 59; k++)
				{
				if (((k + j) > (c + i) && k >= c) || c < k)
				{
					putchar(c);
					putchar(i);
					putchar(' ');
					putchar(k);
					putchar(j);

					if (c + i + k + j == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
