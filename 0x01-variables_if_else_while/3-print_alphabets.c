#include <stdio.h>
/**
 * main - Print alphabet lower and upper
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphaebet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
