#include "monty.h"
/**
 * monty_mul -  multiplies the second top element of the stack 
 * with the top element of the stack.
 * @head: stack head
 * @count: line_number
 * Return: NONE
*/
void monty_mul(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(inter.file);
		free(inter.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	x = h->next->n * h->n;
	h->next->n = x;
	*head = h->next;
	free(h);
}
