#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 *
 * Return: return 0
 */

void print_numbers(void)
{
	char i;


	for(i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
