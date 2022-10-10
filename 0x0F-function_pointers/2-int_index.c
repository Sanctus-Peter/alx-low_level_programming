#include "function_pointers.h"

/**
 * int_index - search for an integer in an array
 * @array: array to be searched
 * @size: size of the array
 * @cmp: flag to compare with different entry
 *
 * Return: index of the first element found,
 *			-1 if no element found or no element in the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
