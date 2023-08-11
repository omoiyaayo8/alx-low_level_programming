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
		printf( "%dis positive",n);
	else if (n ==0 ) 
		printf("%dis Zero",n);
	else if (n < 0 )
		printf("%dis negative",n);

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
