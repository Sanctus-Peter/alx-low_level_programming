#include "main.h"

/**
 * puts2 - print even number of a string
 * @str: string variable
 *
 * Created by: Sanctus-Peter
 * cc: 12th july, 2022.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
