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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (p);
}
