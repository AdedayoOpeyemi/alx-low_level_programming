#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int multiply(char *num1, char *num2);
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int i, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}

/**
 * multiply - function to multiply
 * @num1: first number for multiplication
 * @num2: second number for multiplication
 * Return: result of multiplication
 */

int multiply(char *num1, char *num2)
{
	int n1, n2, result;

	n1 = atoi(num1);
	n2 = atoi(num2);
	result = n1 * n2;
	return (result);
}
