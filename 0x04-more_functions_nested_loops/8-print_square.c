#include "main.h"

/**
 * print_square - print square
 * @size: integer variable
 *
 * Created by: Sanctus-Peter
 * cc: 7th july, 2022
 */

void print_square(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int jj;

		for (jj = 1; jj <= size; jj++)
		{
			int ii;

			for (ii = 1; ii <= size; ii++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
