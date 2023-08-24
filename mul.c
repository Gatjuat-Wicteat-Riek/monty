#include "monty.h"
/**
 * f_mul -This multiplies the top two elements of
 * the given stack.
 * @head: This is the stack head
 * @counter: This is the line_number
 * Return: nothing will be returned.
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.fl);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hh = *head;
	aub = hh->next->num * hh->num;
	hh->next->num = aub;
	*head = hh->next;
	free(hh);
}
