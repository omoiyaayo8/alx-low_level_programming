#include <stdio.h>

/**
  * main - Prints combination of two digit number
  *
  * Return: Always (Success)
  */
int main(void)
{
	int n;

	for (n = 1; n < 90; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	/*putchar('\n');*/

	return (0);
}

