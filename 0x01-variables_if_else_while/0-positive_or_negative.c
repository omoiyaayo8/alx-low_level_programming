#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description:"0-positive_or_negative"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	/* Collect integer number from Keyboard and display it */

	printf("Enter a number: ");
	scanf("%d", &n);
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is Negative\n", n);
	else
		printf("%d is Zero\n", n);

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
