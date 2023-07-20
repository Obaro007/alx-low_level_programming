#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program that prints the opcodes of its own main function.
 * @argc: Counts the number of arguments supplied to the program.
 * @argv: Array of strings that are the arguments passed to the program.
 *
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *ptr;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr  = (unsigned char *)main;

	for (i = 0; i < num_bytes - 1; i++)
		printf("%02hhx ", ptr[i]);

	printf("%02hhx\n", ptr[num_bytes - 1]);

	return (0);
}
