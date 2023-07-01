#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * reverse_string - function to reverse string
 *
 * @str: string to be reversed
 *
 * Return: reversed string
 */

char *reverse_string(char *str)
{
	int length = strlen(str);
	int i;
	char temp;

	for (i = 0; i < length / 2; i++)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
	return (str);
}
/**
 * infinite_add - function that adds 2 numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer to hold result
 * @size_r: size of buffer to hold result
 *
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum;
	int i = 0;

	int len1 = strlen(n1);
	int len2 = strlen(n2);

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	while (*n1 || *n2)
		sum = carry;

		if (*n1)
		{
			sum += *n1 - '0';
			n1++;
		}
		if (*n2)
		{
			sum += *n2 - '0';
			n2++;
		}
		carry = sum / 10;
		sum %= 10;
		r[i] = sum + '0';
		i++;
	}
	if (carry)
	{
		if (i + 1 > size_r)
		{
			return (0);
		}
		r[i] = carry + '0';
		i++;
	}
	r[i] = '\0';
	reverse_string(r);
	return (r);
}
