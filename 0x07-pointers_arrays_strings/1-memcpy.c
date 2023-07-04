/**
 * _memcpy - function to copy memorary from dest to source
 *
 * @dest: destination memory area
 * @src: source memry area
 * @n: number of bytes to be copied
 *
 * Return:  dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
