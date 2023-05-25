#include "monty.h"
/**
 * monty_pint - prints the value at the top of the stack
 * @head: stack head
 * @count: line_number
 * Return: NONE
*/
void monty_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(inter.file);
		free(inter.data);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
