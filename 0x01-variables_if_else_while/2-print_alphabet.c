#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all letters of the alphabeth in lower case
 *
 * Return: 0 if successful
 */
int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
