#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print chess board
 * @a: pointer to first element in the 2-d array
 *
 * Created by - Sanctus-Peter
 * cc: 18th July, 2022
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
		putchar('\n');
	}
}
