#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of two numbers
 * @argc: number of command lines argument
 * @argv: pointer of an array of command line arguments
 * return: 0-success, non-zero-fail
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum)
	}
	else
	{
		printf("error\n");
		return (0);
	}

	return (0);
}
