/**
 * print_name - The program prints a name
 * @name: The name to printed
 * @f: The function pointer with a char parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
