#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - The program prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

{
	va_list ap;
	va_start (ap, n);


	for(unsigned int i = 0; i < n; i++)
	{	
		printf("%d", va_arg(ap, int));

		if (seperator && i < n -1)
			printf("%s", seperator);
	}

	printf("\n");

	va_end(ap);
}
