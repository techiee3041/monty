#include "monty.h"

void div_func(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short", counter);
		exit(EXIT_FAILURE);
	}	
	
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero", counter);
		exit(EXIT_FAILURE);
	}
	
	(*head)->next->n /= (*head)->n;


	pop(head, counter);

 
}
