#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: is the operator passed as an argument to the program
 *
 * Return: a pointer to the corresponding function, NULL if operator not found
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
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if  (s[0] == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
