#include <stdio.h>
#include <unistd.h>
/**
 * main - prints alphabets in lowercase then in uppercase.
 * Description: Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
