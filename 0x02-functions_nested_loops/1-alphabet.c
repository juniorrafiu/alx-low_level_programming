#include "main.h"

/**
 * main - print alphabet in lower case
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
