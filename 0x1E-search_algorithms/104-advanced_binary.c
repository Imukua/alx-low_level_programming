#include "search_algos.h"

int advanced_binary_recursive(int *array, int low, int high, int value);

/**
 * advanced_binary - Searches for a given value using binary_serach algo
 * @array: the array containing the value to be found
 * @size: the size of the array to be searched in
 * @value: The value to be found
 *
 * Return: -1 if the value isnt found or array is NULL , the index if the vlaue
 * otherwise.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;

	if (array == NULL)
		return (-1);
	return (advanced_binary_recursive(array, low, high, value));
}

/**
 * advanced_binary_recursive - Recursive function to perform binary_search
 * @array: array to be searched in
 * @low: Lower bound of current range
 * @high: Upper bound to current range
 * @value: value in question
 *
 * Return: index of value if found, -1 otherwise
 */

int advanced_binary_recursive(int *array, int low, int high, int value)
{
	int i;
	int mid = low + (high - low) / 2;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value && (mid == low || array[mid - 1] != array[mid]))
			return (mid);
		else
			return (advanced_binary_recursive(array, low, mid - 1, value));
		if (array[mid] > value)
			return (advanced_binary_recursive(array, low, mid - 1, value));
		else
			return (advanced_binary_recursive(array, mid + 1, high, value));
	}

	return (-1);
}
