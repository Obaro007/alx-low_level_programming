#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - The program  prints strings, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of strings  passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    va_start(ap, n);

    for (unsigned int i = 0; i < n; i++)
    {
        const char *str = va_arg(ap, const char *);

        if (str != NULL)
            printf("%s", str);
        else
            printf("(nil)");

        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }

    va_end(ap);

    printf("\n");
}
