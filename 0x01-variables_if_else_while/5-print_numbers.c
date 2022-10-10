#include <stdio.h>

/**
 * main - output all single digit number of base 10
 *
 * Return: 0 if successful
 */
int main(void)
{
	int var;

	for (var = 0; var < 10; var++)
		printf("%d", var);

	printf("\n");

	return (0);
}
