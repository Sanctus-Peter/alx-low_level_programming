#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check if a random number is positive or negative
 *
 * Return: 0 if error
 */
int main(void)
{
	int n;
	int nLast;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nLast = n % 10;

	if (nLast > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, nLast);
	else if (nLast < 6 && nLast != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nLast);
	else
		printf("Last digit of %d is %d and is 0\n", n, nLast);

	return (0);
}
