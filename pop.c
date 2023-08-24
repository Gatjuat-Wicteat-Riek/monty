#include "monty.h"
/**
 * f_pop - This prints the top of the whole stack.
 * @head: This is the stack head to be returned.
 * @count: This is the line_number present.
 * Return: Nothing to be returned.
*/
void f_pop(stack_t **head, unsigned int count)
{
	stack_t *hh;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.fl);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hh = *head;
	*head = hh->next;
	free(hh);
}
