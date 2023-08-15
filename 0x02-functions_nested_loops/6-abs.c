#include "main.h"

/**
 * _abs - Find the absolute value of a number.
 *@c: The number to find.
 *
 *Return: Absolute value of number
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_v;

		abs_v = c * -1;
		return (abs_v);
	}
	return (c);
}
