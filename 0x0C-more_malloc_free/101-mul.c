#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * mul - The function multiplies two numbers as strings
 * @num1: First number as a string
 * @num2: Second number as a string
 * @mem: Allocated memory to store the result of the multiplication
 *
 * Return: Multiple of two numbers
 */
void mul(char *num1, char *num2, char *mem)
{
	int len1 = strlen(num1), len2 = strlen(num2), start;
	int totalLen = len1 + len2;
	int *temp_mem = (int *)calloc(totalLen, sizeof(int));
	int i, j, digit1, digit2, product;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			product = digit1 * digit2;

			temp_mem[i + j + 1] += product % 10;
			temp_mem[i + j] += product / 10;
		}
	}

	for (i = totalLen - 1; i > 0; i--)
	{
		if (temp_mem[i] >= 10)
		{
			temp_mem[i - 1] += temp_mem[i] / 10;
			temp_mem[i] %= 10;
		}
	}

	start = 0;
	while (temp_mem[start] == 0 && start < totalLen - 1)
		start++;

	for (i = start, j = 0; i < totalLen; i++, j++)
		mem[j] = temp_mem[i] + '0';

	mem[totalLen - start] = '\0';

	free(temp_mem);
}

/**
 * validate_args - validate the arguments passed into the program
 * @argv: Array of strings that are the arguments
 */
void validate_args(char *argv[])
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
}

/**
 * main - Entry point.
 * @argc: Counts the number of arguments supplied to the program.
 * @argv: Array of strings that are the arguments passed to the program.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1 = argv[1], *num2 = argv[2], *mem;
	int len;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	validate_args(argv);

	len = strlen(num1) + strlen(num2);
	mem = malloc(sizeof(char) * (len + 1));

	mul(num1, num2, mem);
	printf("%s\n", mem);

	free(mem);

	return (0);
}
