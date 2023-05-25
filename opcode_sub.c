#include "monty.h"
/**
  *monty_sub- subtract top element in the stack from second top element.
  *@head: stack head
  *@count: line_number
  *Return: NONE
 */
void monty_sub(stack_t **head, unsigned int count)
{
	stack_t *x;
	int var, node;

	x = *head;

	for (node = 0; x != NULL; node++)
		x = x->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(inter.file);
		free(inter.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = *head;
	var = x->next->n - x->n;
	x->next->n = var;
	*head = x->next;
	free(x);
}
