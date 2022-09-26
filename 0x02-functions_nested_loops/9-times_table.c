#include "main.h"
/**
 * times_table - prints the tbale of an integer starting
 *
 * Return: 0
 */

void times_table(void)
{
	int x, y, product;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			product = x * y;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
