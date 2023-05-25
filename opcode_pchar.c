#include "monty.h"
/**
 * monty_pchar - prints the char at the top of the stack
 * followed by a new line
 * @head: stack head
 * @count: line_number
 * Return: NONE
*/
void monty_pchar(stack_t **head, unsigned int count)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(inter.file);
		free(inter.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(inter.file);
		free(inter.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
