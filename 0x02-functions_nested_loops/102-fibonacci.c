#include <stdio.h>

/**
 * main - first 50 fibonacci number
 *
 * Created by: Sanctus-Peter
 * cc: 5th july, 2022
 *
 * Return: 0 if successful
 */
int main(void)
{
	long int n1 = 1, result, n2 = 2, nLast = 50;
	int ii;

	printf("%lu, %lu, ", n1, n2);
	for (ii = 2; ii < nLast; ii++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu", result);
		if (ii != nLast - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
