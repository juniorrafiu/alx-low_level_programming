#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers except 2 & 4
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
