#include "main.h"
#include <ctype.h>

/**
 * _isupper - To check whether is uppercase
 * @c: Character to check
 *
 * Return: 1 for upper or 0 for otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else 
		return (0);
}

