#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - A program to  print the last digit of the number stored in the variable
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("%d is greater than 5\n", lastd);
	}
	else if (lastd == 0)
	{
		printf("Las %d is 0\n", lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("last digit of %d  is less than 6 and %d  not 0", n,lastd);
	}

	return (0);
}
