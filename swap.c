#include "monty.h"
/**
 * f_swap - This will add the top two elements
 * present on the satck of the stack.
 * @head: This is the stack head present.
 * @count: This is a line_number present.
 * Return: nothing to return
*/
void f_swap(stack_t **head, unsigned int count)
{
	stack_t *hh;
	int ln = 0, aub;

	hh = *head;
	do {
		hh = hh->next;
		ln++;
	} while (hh);
	if (ln < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.fl);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
hh = *head;
aub = hh->num;
hh->num = hh->next->num;
hh->next->num = aub;
}
