#include "function_pointers.h"

/**
 * array_iterator - function to act on an array of element
 * @array: an array of element of type int
 * @size: size of the array
 * @action: callback function pointing to another function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
