#include "3-calc.h"

/**
 * op_add - addition
 * op_sub - substraction
 * op_mul - multiplication
 * op_div - division
 * op_mod - modulo
 * @a: int parameter
 * @b: int parameter
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}
	int i;

	while (ops[i])
	{

	}
}
