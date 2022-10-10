#include "main.h"

int square(int, int);
/**
 * _sqrt_recursion - find the square root of natural number
 * @n: integer whose square root is to be find
 *
 * Return: the square root of integer n
 *
 * Created by: Sanctus-Peter
 * cc: 20th July, 2022
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);

}
