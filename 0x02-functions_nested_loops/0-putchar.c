#include "main.h"
/**
 * main - print _putchar as a message.
 * Description: Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {35, 52, 57, 56, 39, 44, 37, 54};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}

	_putchar('\n');
	return (0);
}
