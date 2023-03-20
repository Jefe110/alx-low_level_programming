#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *Name: Timmilehin
 *Date:12;42 march 2023
experience: it was a pain in the as*
 status dont
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

