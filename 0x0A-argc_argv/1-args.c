#include <stdio.h>
/**
 * main - prints the no. of arguments passed to it.
 * @argc: the no. of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 *
 *  Return: 0
*/
int main( int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc -1);

	return (0);
}
