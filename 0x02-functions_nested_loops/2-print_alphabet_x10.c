#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet 10x
 *
 * Return:void
 */

void print_alphabet_x10(void)
{
	int i;
	char cd;

	for (i = 1; i <= 10; i++)
	{
		for (cd = 'a'; cd <= 'z'; cd++)
		{
			_putchar(cd);
		}
		_putchar('\n');
	}
}

