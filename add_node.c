#include "monty.h"
/**
 * addnode - This will add node to the head stack.
 * @head: This is the head of the stack to be returned.
 * @n: This will retured a new_value
 * Return: nothing will be returned.
*/
void addnode(stack_t **head, int n)
{

	stack_t *_newnode, *aub;

	aub = *head;
	_newnode = malloc(sizeof(stack_t));
	if (_newnode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aub)
		aub->previ = _newnode;
	_newnode->num = n;
	_newnode->next = *head;
	_newnode->previ = NULL;
	*head = _newnode;
}
