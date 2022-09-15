#include "main.h"
/**
 * print_line - draws line using _
 * @n: number of _
 */
void print_line(int n)
{
	int ln;

	if(n > 0)
	{
		for (ln = 0; ln < n; ln++)
			_putchar('_');
	}
	_putchar('\n');
}
