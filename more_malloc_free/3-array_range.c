#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to the array, or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}
