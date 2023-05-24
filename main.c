#include "monty.h"
stack_t **head = NULL;
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, otherwise EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
	stack_t *head;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	execute_instructions(argv[1]);
	return (0);
}
