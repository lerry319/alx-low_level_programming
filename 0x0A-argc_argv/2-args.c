#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments supplied
 * @argv: an array of pointers to the argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		pritf("%s\n", argv[arg]);

	return (0);
}
