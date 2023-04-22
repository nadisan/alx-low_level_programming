#include "3-calc.h"
#include <stdlib.h>

int(*get_op_func(char *s))(int, int)

{
	/*op_tops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while ( ops[i].op != Null && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);*/

	while (s == NULL)
		return NULL;
	return (0);
	 
}
