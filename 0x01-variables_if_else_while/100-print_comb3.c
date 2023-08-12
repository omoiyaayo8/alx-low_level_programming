#include <stdio.h>

/**
  * main - Prints combination of two digit number
  *
  * Return: Always (Success)
  */
int main(void)
{
	int n;

	for (n = '00'; n <= '99'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}

