#include "monty.h"
/**
 * div_func - Divides the second top element of the stack by the top element.
 * @head: Double pointer to the head of the stack.
 * @counter: Line number of the instruction in the script.
 *
 * Description: If the stack is less than two elements, it prints an error
 * message to stderr and exits. If the top element of the stack is 0, it
 * prints an error message to stderr and exits. Otherwise, it divides the
 * second top element of the stack by the top element and removes the top
 * element.
 */
void div_func(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n /= (*head)->n;


	pop(head, counter);

}
