#include <stdlib.h>
#include "main.h"

/**
 * *array_range - fills memory with a constant byte
 * @min: memory area to be filled
 * @max: char to copy
 *
 * Return: pointer to the memory area s
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
