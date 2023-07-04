/**
 * _memset - entry point to function
 *
 * @s: first arguement variable pointer
 * @b: second arguement char b
 * @n: third arguement unsigned int n
 *
 * Return: pointer t s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return s;
}
