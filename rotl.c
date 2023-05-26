#include "monty.h"

/**
 * rotl - function that rotates the tail to the top
 * @head: pointer to the top of the stack
 * @counter: where the line number appears
 * Description: 13. rotl
 * Return: see below
 * 1. upon success, nothing
 * 2. upon fail, EXIT_FAILURE
 */
void rotl(stack_t **head, unsigned int counter)
{
	stack_t *current, *final;
	(void)counter;

	if ((*head == NULL) || ((*head)->next == NULL))
	{
		;
	}
	else
	{
		current = final = *head;
		while (final->next)
		{
			final = final->next;
		}
		*head = current->next;
		final->next = current;
		current->prev = final;
		current->next = NULL;
		(*head)->prev = NULL;
	}
}
