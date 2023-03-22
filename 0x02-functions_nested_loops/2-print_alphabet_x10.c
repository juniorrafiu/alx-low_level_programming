#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char d;

	for (i = 0; i < 10; i++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
