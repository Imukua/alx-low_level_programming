#include "search_algos.h"

/**
 * interpolation_search - Searchs for a value using interpolation search algo
 * @array: The array to be searched in
 * @size: The size of the array to be searched in
 * @value: The value to be searched for
 *
 * Return: the index of the value if its found otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int probe;
	int low = 0;
	int high = size - 1;

	if (array != NULL)
	{
		while (low <= high)
		{
			probe = low + (value - array[low]) *
							  (high - low) / (array[high] - array[low]);
			if (probe < (int)size)
				printf("Value checked array[%d] = [%d]\n", probe, array[probe]);
			else
			{
				printf("Value checked array[%d] is out of range\n", probe);
				break;
			}
			if (value == array[probe])
				return (probe);

			if (value > array[probe])
				low = probe + 1;

			else
				high = probe - 1;
		}
	}
	return (-1);
}
