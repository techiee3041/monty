#include "monty.h"
extern stack_t *head;

void free_stack(stack_t **head)
{
	stack_t *current = *head;
	stack_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
