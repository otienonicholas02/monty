#include "monty.h"
/**
 * add_node - add node to the stack
 * @head: head of the stack
 * @n: new_value to add
 * Return: NONE
*/
void add_node(stack_t **head, int n)
{

	stack_t *new_node, *x;

	x = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (x)
		x->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
