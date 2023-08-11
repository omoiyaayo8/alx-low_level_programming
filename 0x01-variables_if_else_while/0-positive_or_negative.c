#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	/* Collect integer number from Keyboard and display it */

	printf("Enter a number:\n ");
	scanf("%d" , &n);
	if ( n > 0)
	{
		printf(n, " is positive\n");
	} else if (n ==0 ) 
	{
		printf(n, "is Zero\n");
	}
	else
       	{
		printf(n, "is negative\n");
	}
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
