#include "main.h"
/**
 * sqrt_check - returns the natural square root of a no.
 * @g: integer
 * @c: integer
 * Return: 0
 */
int _sqrt_check(int c, int g)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
 * _sqrt_recursion - retruns the natual square root of a no.
 * @n: integer to find sqrt of
 *
 * Return: natual square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
