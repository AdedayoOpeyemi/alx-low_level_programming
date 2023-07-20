#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]);
/**
 * print_opcodes - function to print operational code
 * @num_bytes: number of bytes
 *
 * Return: void
 */
void print_opcodes(int num_bytes)
{
	int i;
	unsigned char *opcodes = (unsigned char *) main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcodes[i]);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - main entry point
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always integer.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes(num_bytes);

	return (0);
}
