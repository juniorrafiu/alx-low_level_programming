#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: A destination memory area
 * @src: The source buffer to copy.
 * @n: The number of bytes to copy.
 *
 * Return: The memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
