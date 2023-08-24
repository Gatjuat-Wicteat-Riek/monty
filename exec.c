#include "monty.h"
/**
* execute - This will execute the opcode in a
* given stack.
* @stack: Thisis the head linked list
* of the stack.
* @counter: This is the line_counter to be returned.
* @file: This is a poiner to monty file in a stack.
* @content: This is the line content to be returned.
* Return: nothing will be returned return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int k = 0;
	char *oper;

	oper = strtok(content, " \n\t");
	if (oper && oper[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	do {
		if (strcmp(oper, opst[k].opcode) == 0)
		{	opst[k].fn(stack, counter);
			return (0);
		}
		k++;
	} while (opst[k].opcode && oper);

	if (oper && opst[k].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, oper);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
