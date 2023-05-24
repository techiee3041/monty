#include "monty.h"

/**
 * execute_instructions - Execute the Monty byte code instructions
 * @file_name: The path of file containing Monty byte code
 * Description:
 * - Opens the file and reads each line of Monty byte code instructions
 * - Executes the instructions line by line
 * - Prints error messages and exits if there are any issues
 */
void execute_instructions(char *file_name)
{
    FILE *fd;
    char line[100];
    unsigned int counter = 0;
    char *op;
    struct instruction_s instruction;

    fd = fopen(file_name, "r");
    if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}
    while (fgets(line, sizeof(line), fd))
    {
        counter++;
        op = strtok_custom(line, " \t\n$");
        if (op == NULL)
            continue;
        instruction.opcode = op;

        if (strcmp(op, "push") == 0)
            instruction.f = push;
        else if (strcmp(op, "pall") == 0)
            instruction.f = pall;
        else if (strcmp(op, "pint") == 0)
            instruction.f = pint;
        else if (strcmp(op, "pop") == 0)
            instruction.f = pop;
		else if (strcmp(op, "swap") == 0)
			instruction.f = swap;
        else
            printf("L%d: unknown instruction %s\n", counter, op);
        instruction.f(&head, counter);
    }
    fclose(fd);
}

