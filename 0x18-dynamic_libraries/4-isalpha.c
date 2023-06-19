#include "main.h"

/**
 *_isalpha - check for uppercase
 *@c: char to be checked
 * Return:1 when lowercase and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
