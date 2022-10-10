#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
