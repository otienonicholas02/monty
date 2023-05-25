#include "monty.h"
/**
  *monty_rotl- rotates the stack to the top.
  *@head: stack head
  *@count: line_number
  *Return: NONE
 */
void monty_rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *temp = *head, *x;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	x = (*head)->next;
	x->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = x;
}
