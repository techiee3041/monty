#include "monty.h"

/**
 * isinteger - Checks if a character represents an integer.
 * @c: The character to be checked.
 *
 * Return: 1 if @c is a digit (0-9), 0 otherwise.
 */
int  isinteger(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
