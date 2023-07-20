#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - The function adds two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The function subtracts two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The result after the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The function multiplies two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The result after the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The function divides two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The result after the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - The function return the remainder of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The remainder of two numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
