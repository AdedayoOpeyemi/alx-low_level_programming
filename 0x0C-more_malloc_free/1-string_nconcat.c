#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function to concatenate string
 * @s1: first string
 * @s2: second string
 * @n: number of char of s2 to be aded to s1
 * Return: pointer to result of concatenation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len;
	size_t s2_len;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	result = malloc((s1_len + n + 1) * sizeof(char));

	if (result != NULL)
	{
		strncpy(result, s1, s1_len);
		strncpy(result + s1_len, s2, n);
		result[s1_len + n] = '\0';
	}
	return (result);
}
