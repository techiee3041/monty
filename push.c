#include "monty.h"
/**
 * push - function to push a value to the stack
 * @head: double pointer to the stack
 * @counter: line number of the push opcode
 */
void push(stack_t **head, unsigned int counter)
{
	char *arg;
	struct stack_s *newnode;
	int value;

	arg = strtok(NULL, "\n ");
	if (arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		exit(EXIT_FAILURE);
	}

	if (!isdigit(arg[0]) && arg[0] != '-' && arg[0] != '+')
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		exit(EXIT_FAILURE);
	}
	else
	{
		value = atoi(arg);
	}

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newnode->n = value;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	
	*head = newnode;
}
/**
 * pall - function that prinits elements of a stack
 * @head: pointer to the struct
 * @counter: line number
 */
void pall(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}

	(void)counter;

}
