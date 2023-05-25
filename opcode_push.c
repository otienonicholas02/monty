#include "monty.h"
/**
 * monty_push - pushes an element into the stack
 * @head: pointer to topmost element of the stack
 * @count: line_number
 * Return: no return
*/
void monty_push(stack_t **head, unsigned int count)
{
	int n, i = 0, f = 0;

	if (inter.arg)
	{
		if (inter.arg[0] == '-')
			i++;
		for (; inter.arg[i] != '\0'; i++)
		{
			if (inter.arg[i] > 57 || inter.arg[i] < 48)
				f = 1; }
		if (f == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(inter.file);
			free(inter.data);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(inter.file);
		free(inter.data);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(inter.arg);
	if (inter.m_flag == 0)
		add_node(head, n);
	else
		add_queue(head, n);
}
