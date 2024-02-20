#include "sort.h"

/**
 * swap_int - swaps two integers.
 *
 * @a: first int to be swapped.
 * @b: second int to be swapped with.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorts an array of integers.
 *
 * @array: The array to be sorted.
 * @size: the size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int minimum;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minimum = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum])
				minimum = j;
		}
		swap_int(&array[i], &array[minimum]);
		print_array(array, size);
	}
}