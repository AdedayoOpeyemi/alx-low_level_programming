#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function that prints out randomly generated password
 *
 * Return: 0 
 */

int main(void)
{
	int sum;
	char c;

	// Seed the random number generator with the current time
	srand(time(NULL));

	// Loop until the sum reaches or exceeds 2645
	while (sum <= 2645)
	{
		// Generate a random character within the range of 0-127
		c = rand() % 128;

		// Add the ASCII value of the character to the sum
		sum += c;

		// Print the character
		putchar(c);
	}

	// Print the last character to make the sum equal to 2772
	putchar(2772 - sum);

	return (0);
}
