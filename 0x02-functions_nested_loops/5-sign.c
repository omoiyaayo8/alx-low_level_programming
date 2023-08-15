#include "main.h"

/**
 * print_sign - Print sign for Nth 
 * @c: Number to be checked
 *Return: 1 for +ve, -1 for -ve or 0 for Zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
