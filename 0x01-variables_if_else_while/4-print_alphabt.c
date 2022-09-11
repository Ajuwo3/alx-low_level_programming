#include <stdio.h>
#include <unistd.h>
/**
 * main - print alpabets in lowercase except q and e
 * Description: Entry point/
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
return (0);
}
