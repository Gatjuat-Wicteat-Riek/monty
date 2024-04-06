#include "monty.h"
/**
 * f_pint - This prints the top of the whole stack.
 * @head: This is the stack head to returned.
 * @count: This is the line_number present.
 * Return: nothing will be returned. return
*/
void f_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.fl);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->num);
}
