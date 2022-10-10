#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_toupper - convert string to upper case
 * @str: pointer to string to be converted
 *
 * Return: pointer to converted string
 *
 * Created by: Sanctus-Peter
 * cc: 15th July, 2022.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
