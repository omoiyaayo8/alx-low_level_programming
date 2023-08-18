#include "main.h"
/**
*print_line - prints a straight line
*@n:parameter
*Return:returns nothing
*/
void print_line(int n)
{
	do
	{
		_putchar('_');
	} while (n-- > 0);
	_putchar('\n');
}
