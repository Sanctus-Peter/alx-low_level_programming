#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of leading diagonal
 * @a: pointer to the array
 * @size: size of the array
 *
 * Created by: Sanctus-Peter
 * cc: 18th, July, 2022
 */

void print_diagsums(int *a, int size)
{
	int i, sumDiag = 0, sumTrailDiag = 0;

	for (i = 0; i < size * size; i++)
	{
		if ((i % (size + 1) == 0) && (i % (size - 1) == 0)
				&& i && i < size * size - 2)
		{
			sumDiag += a[i];
			sumTrailDiag += a[i];
		}
		else if (i % (size + 1) == 0)
			sumDiag += a[i];
		else if (i % (size - 1) == 0 && i && i < size * size - 2)
			sumTrailDiag += a[i];
	}

	printf("%d, %d", sumDiag, sumTrailDiag);
	putchar('\n');
}
