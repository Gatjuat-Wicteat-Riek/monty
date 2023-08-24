#include "monty.h"
/**
  * f_sub- This will perform sustration on the various
  * number present on the stack.
  * @head: This is the stack head present.
  * @count: This is the line_number present.
  * Return: nothing to return
 */
void f_sub(stack_t **head, unsigned int count)
{
	stack_t *aub;
	int st, nodde;

	aub = *head;
	for (nodde = 0; aub != NULL; nodde++)
		aub = aub->next;
	if (nodde < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.fl);
		free(bus.cont);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aub = *head;
	st = aub->next->num - aub->num;
	aub->next->num = st;
	*head = aub->next;
	free(aub);
}
