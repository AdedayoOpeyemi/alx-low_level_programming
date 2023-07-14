#include <stdlib.h>

/**
 * array_range - Function to create an array of integers
 * @min: min value in raneg
 * @max: maximum value in range
 * Return: pointer to arr
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr != NULL)
	{
		for (i = 0; min <= max; i++, min++)
		{
			arr[i] = min;
		}
	}

	return (arr);
}
