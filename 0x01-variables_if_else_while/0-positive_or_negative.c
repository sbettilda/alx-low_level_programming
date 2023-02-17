#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Positives are better than negatives */

/**
 * main - Positives and negatives task
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0){
		printf("%d is %s\n", n, "is positive");

	}else if (n = 0){
		printf("%d is %s\n", n, "is zero");

	}else if (n > 0){
		printf("%d is %s\n", n, "is negative");
	}
	return 0;
}
