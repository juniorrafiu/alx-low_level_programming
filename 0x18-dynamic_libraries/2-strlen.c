#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns len of string
 * @s: char to be checked
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
