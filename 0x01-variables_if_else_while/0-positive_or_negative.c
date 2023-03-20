#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *
 * main -Entry point
 * Name: Jefe
 * Date: 03-20-2023
 * Details: c program to print -ve, zero and -ve results of a random number
 * Returns: 0 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

