#include <stdio.h>

/**
 * main - prints number of argument passed.
 * @argc: number of command lines argument
 * @argv: pointer to an array of command line arguments.
 * return: 0-succes, n0n-zero-fail
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
