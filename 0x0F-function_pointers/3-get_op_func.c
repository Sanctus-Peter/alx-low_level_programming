#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - call back, to call function depending on what is passed
 * @s: pointer to arguement passed that determines what function to call
 * Return: result
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
			return (op_s[i].f);
		i++;
	}
	return (NULL);
}
