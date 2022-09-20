#include "main.h"
/**
 *print_array: prints n elements
 *@a: array of integers
 *@n: number
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf('\n');
}
