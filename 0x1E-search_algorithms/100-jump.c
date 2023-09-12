#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array using ump search mechanism
 * @array: The array to be searched in
 * @size: the size of the array to be searched in
 * @value: The value to be searched for
 *
 * Return: -1 if the array is NULL or value is not found, otherwise return
 * index of found value
 */

int jump_search(int *array, size_t size, int value)
{
	int i;
	int jump = sqrt(size);
	int right = jump;

	if (array != NULL)
	{
		while (right < (int)size && array[right] < value)
		{
			printf("Value checked array[%d] = [%d\n]", right, array[right]);
			right += jump;
		}

		printf("value found between indexes [%d] abd [%d]\n",
			   right - jump, jump);

		for (i = right - jump; i < (int)size && i <= right; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				;
			returm(i);
		}
	}

	return (-1);
}
