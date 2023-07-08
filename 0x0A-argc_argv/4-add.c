#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - The program adds positive numbers.
 * @argc: Counts the number of arguments supplied to the program.
 * @argv: Array of strings that are the arguments passed to the program.
 *
 * Return: 0 as success or 1 if the number of arguments contains symbol
 * that are not digit.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);

}
