#include "monty.h"
/**
 * f_queue - This prints the top of the entire queues.
 * @head: This is the stack head to be returned.
 * @count: This is a line_number present at each line.
 * Return: Nothing will returned to the console.
*/
void f_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lf = 1;
}

/**
 * addqueue - This will add node to the tail stack given in the
 * codes.
 * @nm: This is a new value to be checked.
 * @head: head of the stack
 * Return: Nothing to return.
*/
void addqueue(stack_t **head, int nm)
{
	stack_t *_newnode, *aub;

	aub = *head;
	_newnode = malloc(sizeof(stack_t));
	if (_newnode == NULL)
	{
		printf("Error\n");
	}
	_newnode->num = nm;
	_newnode->next = NULL;
	if (aub)
	{
		while (aub->next)
			aub = aub->next;
	}
	if (!aub)
	{
		*head = _newnode;
		_newnode->previ = NULL;
	}
	else
	{
		aub->next = _newnode;
		_newnode->previ = aub;
	}
}
