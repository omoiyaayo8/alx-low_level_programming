#include "main.h"

/**
 *prints_most_number - print from 0 to 9 exclude 2 and 4.
 *@n: number to e printed
 * Return:void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n == 2) || (n == 4))
		{
			continue;
		}
		_putchar('0' + n);
	}
	_putchar(10);
}
