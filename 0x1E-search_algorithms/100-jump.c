#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located or -1 if value is not present
 *         or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, left, right;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	left = 0;
	right = 0;

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	right = (right < size) ? right : size - 1;

	while (left <= right)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);

		if (array[left] == value)
			return (left);

		left++;
	}

	return (-1);
}
