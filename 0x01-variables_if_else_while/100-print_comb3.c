#include <stdio.h>

/**
 * main - entry pioint to function
 * Return: returns 0 and exits the function
 */

int main(void)
{
	char i;
	char j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if(i i != 57 && j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
