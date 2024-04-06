#include "monty.h"
/**
  * f_rotr- This rotates the stack to the bottom and give the
  * element at the bottom.
  * @head: This is the stack head to be returned.
  * @count: This is the line_number present.
  * Return: nothing will be  returned.
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *cp;

	cp = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	do {
		cp = cp->next;
	} while (cp->next);
	cp->next = *head;
	cp->previ->next = NULL;
	cp->previ = NULL;
	(*head)->previ = cp;
	(*head) = cp;
}
