/**
 * _strspn - function to  gets the length of a prefix substring
 *
 * @s: string arguement
 * @accept: second arguement
 *
 * Return: number of bytes in the initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
