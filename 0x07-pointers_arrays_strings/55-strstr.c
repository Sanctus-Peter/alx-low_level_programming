#include "main.h"
#include <string.h>

/**
 * _strstr - locate a charater in a string
 * @s: pointer to the string s to be searched
 * @c: pointer to character being searched for
 *
 * Return: pointer to the first position of the c.
 *
 * Created by: Sanctus-Peter
 * cc: 17th July, 2022.
 */

char *_strstr(char *s, char *c)
{
	int len = strlen(c);
	int i, count = 0;

	if (len < 1)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (count == len)
			break;

		if (c[count] == s[i])
			count++;
		else
		{
			if (count > 0)
				i -= count;
			count = 0;
		}
	}

	if (count < len)
		return (NULL);
	return (s + (i - count));
}
