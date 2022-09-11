#include <stdio.h>
#include <unistd.h>
/**
 * main - presents alphabeth in lower case followed by a new line.
 * Description: Entry point
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
	putchar('\n');
return (0);
}
