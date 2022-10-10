#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - reverse an array of integers
 * @arr: pointer to an array of integer
 * @n: size of arr
 *
 * Created by: Sanctus-peter
 * cc: 15th july, 2022
 */

void reverse_array(int *arr, int n)
{
	int *tmp = (int *)malloc(n * sizeof(int));
	int i, j;

	for (i = 0; i < n; i++)
		tmp[i] = arr[i];


	for (i = n - 1, j = 0; i >= 0; i--, j++)
		arr[j] = tmp[i];
}
