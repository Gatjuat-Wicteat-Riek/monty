#include "monty.h"
/**
* main - This is a monty code interpreter.
* @argc: This is the number of arguments present.
* @argv: This is a monty file location present in the stack.
* Return: 0 is returned  on success and -1 when fails.
*/
int main(int argc, char *argv[])
{
	char *cont;
	FILE *fl;
	size_t siz = 0;
	ssize_t mark_line = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fl = fopen(argv[1], "r");
	bus.fl = fl;
	if (!fl)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	do {
		cont = NULL;
		mark_line = getline(&cont, &siz, fl);
		bus.cont = cont;
		count++;
		if (mark_line > 0)
		{
			execute(cont, &stack, count, fl);
		}
		free(cont);
	} while (mark_line);

	free_stack(stack);
	fclose(fl);
return (0);
}
