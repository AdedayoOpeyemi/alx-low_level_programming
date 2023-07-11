#include <stdlib.h>
@include "main.h"
/**
 * _strdup - function to  returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: NULL or pointer to duplicate
 */

char *_strdup(char *str)

{

	char *dup;
	int i, r;

	i = 0;
	r = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dup[r] = str[r];

	return (dup);
}

