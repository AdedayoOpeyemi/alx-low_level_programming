#include <stdlib.h>

/**
 * array_range - Function to create an array of integers
 * @min: min value in raneg
 * @max: maximum value in range
 * Return: pointer to arr
 */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);

	int *arr = malloc((max - min + 1) * sizeof(int));

	if (arr != NULL)
	{
		for (int i = 0; min <= max; i++, min++)
		{
			arr[i] = min;
		}
	}

	return (arr);
}
