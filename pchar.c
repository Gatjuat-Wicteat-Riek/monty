#include "monty.h"
/**
 * f_pchar - This prints the character at the top of the stacks,
 * followed by a new line at the end.
 * @head: This is the stack head to be.
 * @count: This returns the line_number in the stacks.
 * Return: nothing will be returned.
*/
void f_pchar(stack_t **head, unsigned int count)
{
	stack_t *hh;

	hh = *head;
	if (!hh)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.fl);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (hh->num > 127 || hh->num < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.fl);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hh->num);
}
