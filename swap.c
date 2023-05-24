#include "monty.h"

void swap(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL)
	{
		printf("L%d: can't swap, stack too short", counter);
		exit(EXIT_FAILURE);
	}

	temp = (*head)->next;
	(*head)->next = temp->next;
	temp->next = *head;
	temp->prev = NULL;
	(*head)->prev = temp;

	*head = temp;

	
}	
