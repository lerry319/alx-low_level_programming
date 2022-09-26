#include "main.h"

/**
 * _strchr -locates the character in a string.
 * @s: the string to be searched.
 * @c: the character to be located.
 *
 * Return: if c is found - pointer
 * if c is not found - nul
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			retrun (s + index);
	}
	
	return ('\0');
}
