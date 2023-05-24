#include "monty.h"
/**
 * pop - remove elemnt from on top of  stack
 * @head: head of the list
 * @counter: cuunts
 */
void pop(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL)
	{
		printf("L%d: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	*head = (*head)->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;

	}
	free(temp);
}
