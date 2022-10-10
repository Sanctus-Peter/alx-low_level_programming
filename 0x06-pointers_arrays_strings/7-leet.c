#include "main.h"
#include <string.h>

/**
 * leet - encode into a string
 * @s: pointer to the string variable
 *
 * Return: pointer to s
 *
 * Created by: Sanctus-Peter
 * cc: 15th, july 2022.
 */

char *leet(char *s)
{
	int i = 0, j;
	char testCase1[] = "aeotl";
	char testCase2[] = "AEOTL";
	char valid[] = "43071";

	while (s[i] != '\0')
	{
		for (j = 0; valid[j] != '\0'; j++)
		{
			if (s[i] == testCase1[j] || s[i] == testCase2[j])
			{
				s[i] = valid[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
