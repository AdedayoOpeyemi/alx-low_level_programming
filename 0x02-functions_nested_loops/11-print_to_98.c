#include "main.h"

/**
 * _islower -program to check if an argument is lowercase
 * @n: argument to be checked
 * Return: void
 */

void print_to_98(int n)
{

	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
	} else
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("98\n");
}
