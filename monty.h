#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct inter_s - variables -args, file, line data
 * @arg: value
 * @file: points to monty file
 * @data: line data
 * @m_flag: flag change between stack and queue
 * Description: carries values within the program
 */
typedef struct inter_s
{
	char *arg;
	FILE *file;
	char *data;
	int m_flag;
}  inter_t;
extern inter_t inter;
/**
 * struct instruction_s - opcode plus it instruction
 * @opcode: the opcode
 * @f: function for the opcode
 *
 * Description: opcode and its function
 * for stacks and queues
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *data);
void monty_push(stack_t **head, unsigned int number);
void monty_pall(stack_t **head, unsigned int number);
void monty_pint(stack_t **head, unsigned int number);
int exec(char *data, stack_t **head, unsigned int count, FILE *file);
void free_stack(stack_t *head);
void monty_pop(stack_t **head, unsigned int count);
void monty_swap(stack_t **head, unsigned int count);
void monty_add(stack_t **head, unsigned int count);
void monty_nop(stack_t **head, unsigned int count);
void monty_sub(stack_t **head, unsigned int count);
void monty_div(stack_t **head, unsigned int count);
void monty_mul(stack_t **head, unsigned int count);
void monty_mod(stack_t **head, unsigned int count);
void monty_pchar(stack_t **head, unsigned int count);
void monty_pstr(stack_t **head, unsigned int count);
void monty_rotl(stack_t **head, unsigned int count);
void monty_rotr(stack_t **head, __attribute__((unused)) unsigned int count);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void monty_queue(stack_t **head, unsigned int count);
void monty_stack(stack_t **head, unsigned int count);
#endif
