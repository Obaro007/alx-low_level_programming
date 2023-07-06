/**
 * _pow_recursion - The function that returns the value of x raised to the
 * power of y.
 *
 * @x: The value.
 * @y: The power to be multiplied with.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
