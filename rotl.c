#include "monty.h"
/**
  * f_rotl- This rotates the stack to the top and prints the top
  * element.
  * @head: This is the stack head to be returned.
  * @count: This is the line_number present at each file.
  * Return: nothing is to be  returned.
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *temp = *head, *aub;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aub = (*head)->next;
	aub->previ = NULL;
	do {
		temp = temp->next;
	} while (temp->next != NULL);

	temp->next = *head;
	(*head)->next = NULL;
	(*head)->previ = temp;
	(*head) = aub;
}
