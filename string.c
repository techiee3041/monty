#include "monty.h"
#include <string.h>
extern stack_t *head;
/**
 * strtok_custom - function to tokenize a string
 * @str: string to tokenize
 * @delim: delimeter
 * Return: tokenized string
 */
char *strtok_custom(char *str, const char *delim)
{
	static char *token;
	static char *last;

	if (str != NULL)
	{
		last = str;
		token = strtok(last, delim);
	}
	else
	{
		if (last != NULL)
		{
			token = strtok(NULL, delim);
		}
	}

	return (token);
}
