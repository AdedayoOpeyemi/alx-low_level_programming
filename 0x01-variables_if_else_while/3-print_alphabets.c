#include <stdio.h>

/**
 * main - entry pioint to function
 * Return: returns 0 and exits the function
 */

int main(void)
{
        char letter = 'a';

        while (letter <= 'z')
        {
                putchar(letter);
                letter++;
        }
	
	char upper = 'A';

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

        putchar('\n');

        return (0);
}
