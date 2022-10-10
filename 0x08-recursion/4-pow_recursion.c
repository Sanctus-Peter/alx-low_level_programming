#include "main.h"

/**
 * _pow_recursion - function to find the power of an integer
 * @x: integer1
 * @y: power
 *
 * Return: x raised to power y
 *
 * Created by: Sanctus-Peter
 * cc: 20th July, 2022.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
