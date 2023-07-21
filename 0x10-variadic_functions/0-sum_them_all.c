#include <stdarg.h>

/**
 * sum_them_all - The program sums of all its parameters.
 * @n: The number of arguments to be passed
 *
 * Return: The sum of all the parameters or 0 if n is equal to 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
