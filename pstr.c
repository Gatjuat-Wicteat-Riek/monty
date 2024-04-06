#include "monty.h"
/**
 * f_pstr - This will print the string starting at the top of the stack,
 * followed by a new at the end.
 * @head: This is a stack head
 * @count: This is a line_number present.
 * Return: nothing to return
*/
void f_pstr(stack_t **head, unsigned int count)
{
	stack_t *hh;
	(void)count;

	hh = *head;
	do {
		if (hh->num > 127 || hh->num <= 0)
		{
			break;
		}
		printf("%c", hh->num);
		hh = hh->next;
	} while (hh);
	printf("\n");
}
