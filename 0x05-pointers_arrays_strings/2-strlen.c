#include "main.h"

/**
 *  _strlen - function that returns the length of a string
 *  @s: character
 *  Return: returns the length of string
 */
int _strlen(char *s);
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}

