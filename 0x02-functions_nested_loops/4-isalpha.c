#include "main.h"

/**
 * _isalpha - checks for alphabets character
 * @c: checked for character
 * Return:void
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >=97 && c <= 122))
		{
		return (1);
		}
		return (0);
}
