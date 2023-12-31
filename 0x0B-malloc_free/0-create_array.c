#include <stdlib.h>
/**
 * create_array - function to create array
 * @size: size of the arrayt to be created
 * @c: character to use in the array
 * Return: pointer to the Array or NULL if creation fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

}
