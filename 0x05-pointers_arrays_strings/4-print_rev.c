#include <string.h>
#include "main.h"

/**
 * print_rev - print string in reversed order
 * @str: string to be reversed
 *
 * Created by: Sanctus-Peter
 * cc: 12th july, 2022
 */

void print_rev(char *str)
{
	int i, len = strlen(str);

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	_putchar('\n');
}
