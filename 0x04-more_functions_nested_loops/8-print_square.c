#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: l,b of square
 * Return: always 0
 */

void print_square(int size)
{
	int l, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}	
	}
}
