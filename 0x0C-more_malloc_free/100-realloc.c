#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block
 *  using malloc and free
 *
 *  @ptr: pointer to memory
 *  @old_size: size of previously allocated memory
 *  @new_size: new memory size to be allocated
 *  Return: pointer to memory allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size;
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		min_size = old_size < new_size ? old_size : new_size;
		memcpy(new_ptr, ptr, min_size);
		free(ptr);
	}
	return (new_ptr);
}
