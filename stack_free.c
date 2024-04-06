#include "monty.h"
/**
* free_stack - This will free a doubly linked list in the stack
* and gives more room for the codes.
* @head: This is the head of the stack present or to
* be returned.
*/
void free_stack(stack_t *head)
{
	stack_t *aub;

	aub = head;
	do {
		aub = head->next;
		free(head);
		head = aub;
	} while (head);
}
