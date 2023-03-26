#include "main.h"
#include <stdio.h>

/**
 * print_line - prints line
 * @n: line n times
 * Return: 0
 */

void print_line(int n)
{
	int y;

	if (n > 0)
	{
		for (y = 1; y <= n; y++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
