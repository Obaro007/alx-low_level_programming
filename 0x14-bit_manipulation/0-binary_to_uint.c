
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointing to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;

	while (*b)
	{
		char ch = *b;

		if (ch != '0' && ch != '1')
			return (0);

		result = (result << 1) + (ch - '0');
		b++;
	}

	return (result);
}
