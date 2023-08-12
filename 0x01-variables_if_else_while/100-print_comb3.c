#include <stdio.h>

/**
  * main - Prints combination of two digit number
  *
  * Return: Always (Success)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 100; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		putchar(',');
	}

	/*putchar('\n');*/

	return (0);
}

