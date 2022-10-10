#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of actual arguements passed to main function
 * @argv: pointer to the first element in the array of arguements
 *
 * Return: 0 if success
 *
 * Created by: Sanctus-Peter
 * cc: 22nd July, 2022.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	exit(EXIT_SUCCESS);
}
