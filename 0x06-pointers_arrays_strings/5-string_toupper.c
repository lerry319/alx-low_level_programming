#inlude "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @p: string that will be modified
 *
 * Return: char var
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
	}

	return (p);
}
