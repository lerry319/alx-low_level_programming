#include "main.h"
/**
 * main - prints 10 times the alphabet in lowercase
 *        followed by a new line.
 * 
 *
 */
void print_alphabet_x10(void)
{
	int alpha;
	int alpha2;
	
	for (alpha = 0; alpha2 <= 9; alpha++)
	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		{
			_putchar(alpha2);
		}
		_putchar('\n');
	}
}

