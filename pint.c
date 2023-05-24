#include "monty.h"
extern stack_t *head;
/**
 * pint - function that prints the top value of a stack;
 * @counter - line number
 */
void pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL || head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
