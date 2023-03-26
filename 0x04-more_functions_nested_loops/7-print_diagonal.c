#include "main.h"
#include <stdio.h>

/**
 * print_diagonal- prints diagonal
 * @n: diagonal n times
 * Return: always 0
 */

void print_diagonal(int n)
{
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 1; y <= n; y++)
		{
			if (y == 1)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				int s; /* integer for spaces*/
				for (s = 2; s <= y; s++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
