#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - function to print positive, negative or zero depending on value of variable n
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if( n < 0 )
	{
		printf("%d\n  is negative", n );
	} else if( n > 0)
	{
		printf("%d\n  is positive", n );
	} else
	{
		printf("%d\n  is zero", n );
	}

	return (0);
}
