#include "monty.h"
/**
 * f_mod -This will compute the rest of the division on the second
 * elements of the stack.
 * @head: This is the stack head which will be returned.
 * @counter: This is the line_number to be returned.
 * Return: nothing will be returned to the console.
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
	aub = hh->next->num % hh->num;
	hh->next->num = aub;
	*head = hh->next;
	free(hh);
}
