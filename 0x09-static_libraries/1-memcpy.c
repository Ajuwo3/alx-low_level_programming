#include "main.h"

/**
 * _memcpy - function that copies a memory area
 * @dest: momory area to be filled
 * @src: memory area to be copied from
 * @n: size of bytes to be copied
 *
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	for (; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
