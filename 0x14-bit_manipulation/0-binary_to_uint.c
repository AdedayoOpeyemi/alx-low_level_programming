#include "main.h"

/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: binary to be converted
 * Return: unsigned integer or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) + (*b - '0');
		b++;
	}

	return (result);
}
