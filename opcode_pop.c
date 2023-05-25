#include "monty.h"
/**
 * monty_pop -  removes the top element of the stack.
 * @head: stack head
 * @count: line_number
 * Return: no return
*/
void monty_pop(stack_t **head, unsigned int count)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(inter.file);
		free(inter.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
