#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function to check digits
 * @c:char to be checked
 * Return:1 when a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
