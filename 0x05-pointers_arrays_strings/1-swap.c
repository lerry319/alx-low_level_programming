#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: integer swapped
 * @b: interger replaced
 * Return: 0
 */
void swap_int(int *a, int *b);
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
