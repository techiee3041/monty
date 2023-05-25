#include "monty.h"

/**
 *  rotr - Rotates the stack to the bottom
 *  @head: pointer to the stack
 *  @counter: Line number
 */
void rotr(stack_t **head, unsigned int counter)
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
		final->prev->next = NULL;
		final->prev = NULL;
		final->next = current;
		current->prev = final;
		*head = final;
	}
}
