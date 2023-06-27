#include <stdio.io>
#include "main.h"
/**
 * print_array - function that returns the length of a string
 *
 * @a: input array
 *
 * @n: number of elements of array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf('\n')

}
