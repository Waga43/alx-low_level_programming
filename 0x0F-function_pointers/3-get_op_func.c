#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation requested by the user.
 * @s: operator passed as argument to the program
 * Description: You are not allowed to use switch statements
 * You are not allowed to use for or do ... while loops
 * You are not allowed to use goto. You are not allowed to use else
 * You are not allowed to use more than one if statement in your code
 * You are not allowed to use more than one while loop in your code
 * 
 * Return: pointer to the function that corresponds to the operator given
 * as a parameter
 * If s does not match any of the 5 expected operators
 * (+, -, *, /, %), return NULL
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
	};
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
