#include "main.h"

/**
 * _islower - Check lower case letter
 * @c: The letter to be checked
 * Return: 1 for lowercase or 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
