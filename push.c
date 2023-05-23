#include "monty.h"
/**
 * push - function to push a value to the stack
 * @head - represents double pointer to the stack
 * @counter - this is the line number of the push opcode
 */
void push(stack_t **head,  unsigned int counter)
{
	char *arg;
	struct stack_s *newnode;
	int value;

	if (*head == NULL)
	{
		*head = malloc(sizeof(stack_t));
		if (*head == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		(*head)->n = 0;
		(*head)->prev = NULL;
		(*head)->next = NULL;
	}
	arg = strtok(NULL, " \n");
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
	newnode->prev = *head;
	newnode->next = NULL;

	(*head)->next = newnode;
	*head = newnode;

}

void pall(stack_t **head, unsigned int counter)
{
	stack_t *current = NULL;
	(void)counter;

	current = *head;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
