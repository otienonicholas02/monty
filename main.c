#include "monty.h"
inter_t inter = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter prog
* @argc: argument count
* @argv: argument vector
* Return: On SUCCESS O
*/
int main(int argc, char *argv[])
{
	char *data;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	inter.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		data = NULL;
		read_line = getline(&data, &size, file);
		inter.data = data;
		count++;
		if (read_line > 0)
		{
			exec(data, &stack, count, file);
		}
		free(data);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
