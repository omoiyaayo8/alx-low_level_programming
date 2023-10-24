#include "main.h"

/**
*swap_int - swap two number
*@a: first integer
*@b: second integer
*Return: nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
