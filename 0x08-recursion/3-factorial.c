/**
 * factorial - The program returns the factorial of a given number.
 * @n: The number to return its factorial.
 *
 * Return: A factorial number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
