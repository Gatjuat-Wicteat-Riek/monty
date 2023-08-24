#include "monty.h"
/**
 * f_add - this will add the first top two elements of the
 * stack.
 * @head: This is the head of stack to be returned.
 * @counter: This will return the line_number in the stack.
 * Return: nothing will be  returned.
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *hh;
	int l = 0, aub;

	hh = *head;
	do {
		hh = hh->next;
		l++;
	} while (hh);

	if (l < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.fl);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hh = *head;
	aub = hh->num + hh->next->num;
	hh->next->num = aub;
	*head = hh->next;
	free(hh);
}
