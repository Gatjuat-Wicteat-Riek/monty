#include "monty.h"
/**
 * f_push - This is add node to the stack elements.
 * @head: This is a stack head present.
 * @count: This is a line_number present in each code.
 * Return: nothing will be returned.
*/
void f_push(stack_t **head, unsigned int count)
{
	int nn, jj = 0, fg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			jj++;
		for (; bus.arg[jj] != '\0'; jj++)
		{
			if (bus.arg[jj] > 57 || bus.arg[jj] < 48)
				fg = 1; }
		if (fg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.fl);
			free(bus.cont);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.fl);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	nn = atoi(bus.arg);
	if (bus.lf == 0)
		addnode(head, nn);
	else
		addqueue(head, nn);
}
