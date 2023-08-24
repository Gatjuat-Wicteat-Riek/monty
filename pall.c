#include "monty.h"
/**
 * f_pall - This prints the  all stack to the
 * console.
 * @head: This is a stack head to be returned.
 * @count: has no used
 * Return: nothing will be returned.
*/
void f_pall(stack_t **head, unsigned int count)
{
	stack_t *hh;
	(void)count;

	hh = *head;
	if (hh == NULL)
		return;
	do {
		printf("%d\n", hh->num);
		hh = hh->next;
	} while (hh);
}
