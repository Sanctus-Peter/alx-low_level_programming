#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create an array of char
 * @size: size of the array
 * @arr: character
 *
 * Return: pointer to the array or null if it fails
 *
 * Created by: Sanctus-Peter
 * cc: 23rd July, 2022
 */

char *create_array(unsigned int size, char arr)
{
	char *array_alloc = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || array_alloc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_alloc[i] = arr;

	return (array_alloc);
}
