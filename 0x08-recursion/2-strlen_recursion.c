#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - length of a string
 * @s: pointer to the string to be counted
 *
 * Return: length of the string
 *
 * Created by: Sanctus-Peter
 * cc: 20th July, 2022.
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s > '\0')
		count += _strlen_recursion(s + 1) + 1;

	return (count);
}
