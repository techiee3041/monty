#include "monty.h"
/**
*add - add first nums in a stack
*@head: head
*@counter: counting
*/
void add(stack_t **head, unsigned int counter)
{
	int result;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	result = (*head)->n + (*head)->next->n;
	pop(head, counter);
	(*head)->n = result;
}
