#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @str: string to be reversed
 *
 * Created by: Sanctus-Peter
 * cc: 12th july, 2022
 */

void rev_string(char *str)
{
	int i = strlen(str) - 1, j = 0;
	char tmp;

	while (i > j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
}
