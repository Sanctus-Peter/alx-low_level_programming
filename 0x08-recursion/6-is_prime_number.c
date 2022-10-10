#include "main.h"

int check_prime(int n, int resp);
/**
 * is_prime_number - check if n is prime number
 * @n: integer to be checked
 *
 * Return: i if is prime 0 otherwise
 *
 * Created by: Sanctus-Peter
 * cc: 20th July, 2022.
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @resp: int
 * Return: int
 */

int check_prime(int n, int resp)
{

	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}
