#include "monty.h"
/**
  *monty_rotr- rotates the stack to the bottom
  *@head: stack head
  *@count: line_number
  *Return: NONE
 */
void monty_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *dup;

	dup = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (dup->next)
	{
		dup = dup->next;
	}
	dup->next = *head;
	dup->prev->next = NULL;
	dup->prev = NULL;
	(*head)->prev = dup;
	(*head) = dup;
}
