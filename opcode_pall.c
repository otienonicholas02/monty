#include "monty.h"
/**
 * monty_pall - prints values starting from top of the stack
 * @head: stack head
 * @count: Unused
 * Return: NONE
*/
void monty_pall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
