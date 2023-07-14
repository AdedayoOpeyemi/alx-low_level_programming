#include <stdlib.h>
/**
 * _calloc - function to allocate memory for an array
 * @nmemb: number of member elements in array
 * @size: size of individual element in array
 * Return: pointer to allocated to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *bytePtr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		bytePtr = (unsigned char *)ptr;

		for (i = 0; i < nmemb * size; i++)
		{
			bytePtr[i] = 0;
		}
	}

	return (ptr);
}
