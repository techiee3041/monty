#include "monty.h"
#include <string.h>
/**
 * strtok_custom - function to tokenize a string
 * @str: string to tokenize
 * @delim: delimeter
 * Return: tokenized string
 */
char *strtok_custom(char *str, const char *delim)
{
	char *token = NULL;
	char *last = NULL;

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
