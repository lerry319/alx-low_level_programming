#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = 1; num < 10; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
