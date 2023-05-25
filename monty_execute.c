#include "monty.h"
/**
* exec - executes the opcodes
* @stack: head linked list - stack
* @count: line_count
* @file: points to the monty files
* @data: line num
* Return: NONE
*/
int exec(char *data, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", monty_push}, {"pall", monty_pall}, {"pint", monty_pint},
				{"pop", monty_pop},
				{"swap", monty_swap},
				{"add", monty_add},
				{"nop", monty_nop},
				{"sub", monty_sub},
				{"div", monty_div},
				{"mul", monty_mul},
				{"mod", monty_mod},
				{"pchar", monty_pchar},
				{"pstr", monty_pstr},
				{"rotl", monty_rotl},
				{"rotr", monty_rotr},
				{"queue", monty_queue},
				{"stack", monty_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(data, " \n\t");
	if (op && op[0] == '#')
		return (0);
	inter.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(data);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
