#include "monty.h"
/**
 * free_stack - function to free stack
 * @head: pointer to the satck
 */
void free_stack(stack_t *head)
{
	if (head)
	{
		free_stack(head->next);
		free(head);
	}
}
