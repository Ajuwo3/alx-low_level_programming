#include <unistd.h>
#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * Description: Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	{
	}
	return (0);
}
