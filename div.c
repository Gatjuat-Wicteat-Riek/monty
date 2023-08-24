#include "monty.h"
/**
 * f_div - This will divide the top two elements of in the stack.
 * @head: This returns the head of head stack.
 * @counter: This is the line_number to be returned.
 * Return: nothing will be returned.
*/
void f_div(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.fl);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hh = *head;
	if (hh->num == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.fl);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aub = hh->next->num / hh->num;
	hh->next->num = aub;
	*head = hh->next;
	free(hh);
}
