#include "monty.h"

/**
 * get_sub - function that subtracts the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: where the line number appears
i * Description: 6. sub
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void sub(stack_t **head, unsigned int counter)
{
	stack_t *first, *second;

	if ((*head == NULL) || ((*head)->next == NULL))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *head;
		second = first->next;
		second->n -= first->n;
		*head = second;
		(*head)->prev = NULL;
		free(first);
	}
}
