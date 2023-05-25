#include "monty.h"
/**
 * free_stack - function to free stack
 * @head: pointer to the satck
 */
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
	free(*head);
}
