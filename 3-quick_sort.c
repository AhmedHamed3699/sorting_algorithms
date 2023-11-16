#include "./sort.h"

/**
 * partition - partition the array
 *
 * @array: the array to be sorted
 * @left: the left index
 * @right: the right index
 * @size: size of the array
 * Return: the partition index
 */
int partition(int *array, int left, int right, size_t size)
{
	int pivot = array[right];
	int i = left - 1, j, tmp;

	for (j = left; j <= right - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			if (i != j)
				print_array(array, size);
		}
	}
	tmp = array[i + 1];
	array[i + 1] = array[right];
	array[right] = tmp;
	if (i + 1 != j)
		print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort_helper - helper function for quick sort
 *
 * @array: the array to be sorted
 * @left: the left index
 * @right: the right index
 * @size: size of the array
 */
void quick_sort_helper(int *array, int left, int right, size_t size)
{
	int k;
	;

	if (left < right)
	{
		k = partition(array, left, right, size);
		quick_sort_helper(array, left, k - 1, size);
		quick_sort_helper(array, k + 1, right, size);
	}
}

/**
 * quick_sort - sort array using quick sort
 *
 * @array: the array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int left = 0, right = size - 1;

	if (!array || size < 2)
		return;
	quick_sort_helper(array, left, right, size);
}
