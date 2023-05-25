#include "monty.h"
/**
 * monty_queue - sets the format of the data to a queue
 * @head: stack head
 * @count: line_number
 * Return: NONE
*/
void monty_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	inter.m_flag = 1;
}

/**
 * add_queue - add node to the tail stack
 * @n: new_value to add
 * @head: head of the queue
 * Return: NONE
*/
void add_queue(stack_t **head, int n)
{
	stack_t *new_node, *x;

	x = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (x)
	{
		while (x->next)
			x = x->next;
	}
	if (!x)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		x->next = new_node;
		new_node->prev = x;
	}
}
