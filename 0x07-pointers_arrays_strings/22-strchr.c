#include <string.h>
#include "main.h"

/**
 * _strchr - find a character in a string
 * @s: pointer to the string s to be searched
 * @c: character to be found
 *
 * Return: pointer to the first occurence of the character c
 *
 * Created by: Sanctus-Peter
 * cc: 17th july, 2022.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
