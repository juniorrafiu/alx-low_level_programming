#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values of two integers
 * @a: char to be swapped
 * @b: char to be swapped
 * Return:always 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
