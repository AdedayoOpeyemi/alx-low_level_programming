/**
 * cap_string - function that changes all lowercase to uppercase
 *
 * @s: string to modify
 *
 * Return: s modified string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' || i == 0) && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
	}

	return (s);
}
