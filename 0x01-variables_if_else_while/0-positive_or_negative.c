#include <stdlib.h>
#include <time.h>
#include <stdio.h>

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
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* Collect integer number from Keyboard and display it */
       	/*printf("Enter a number: \n");*/
       	scanf("%d", &n);
       	srand(time(0));
	if (n > 0)
       	{
                printf("%d is positive\n", n);
        }
       	else if (n < 0)
        {
                printf("%d is negative\n", n);
        }
        else
        {
                printf("%d is zero\n", n);
        }
	return (0);
}
