#include "main.h"
/**
 * puts2 - prints every character of a string strarting with 1st.
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int i, j;
	
	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
