#include "monty.h"
/**
* free_stack - frees the linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *x;

	x = head;
	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
