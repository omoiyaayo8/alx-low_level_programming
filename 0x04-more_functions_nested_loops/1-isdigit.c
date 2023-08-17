#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checked for digit
 * @c: Integer to be checked
 *
 * Return: 1 for digit or 0 for otherwise
 *
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

