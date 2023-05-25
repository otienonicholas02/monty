#include "monty.h"
/**
 * monty_mod - computes the division of the second top element 
 * of the stack by the top element of the stack. 
 * @head: stack head
 * @count: line_number
 * Return: NONE
*/
void monty_mod(stack_t **head, unsigned int count)
{
	stack_t *h;
	int length = 0, x;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(inter.file);
		free(inter.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(inter.file);
		free(inter.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	x = h->next->n % h->n;
	h->next->n = x;
	*head = h->next;
	free(h);
}
