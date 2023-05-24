#include "monty.h"
extern stack_t *head;
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, otherwise EXIT_FAILURE
 */
stack_t *head = NULL;
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	execute_instructions(argv[1]);

	return (0);
}
