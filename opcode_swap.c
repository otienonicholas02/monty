#include "monty.h"
/**
 * monty_swap - swaps the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 * Return: NONE
*/
void monty_swap(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(inter.file);
		free(inter.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	x = h->n;
	h->n = h->next->n;
	h->next->n = x;
}
