#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>

/**
 * print_all - The program prints anything
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	const char *ptr = format;
	char *next;
	va_list ap;

	va_start(ap, format);

	while (ptr && *ptr)
	{
		switch (*ptr)
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			next = va_arg(ap, char *);
			if (!next)
				next = "(nil)";

			printf("%s", next);
			break;
		default:
			ptr++;
			continue;
		}
		ptr++;

		if (*ptr)
			printf(", ");
	}

	printf("\n");
	va_end(ap);
}
