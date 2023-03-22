#include "main.h"

/**
 * _islower - check for lowercase
 *c: char to be checked
 * Return:1 when lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

