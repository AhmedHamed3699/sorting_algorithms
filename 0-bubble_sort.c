#include "sort.h"

/**
 * bubble_sort - sort array using bubble sort
 *
 * @array: the array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j = size, tmp;
	int swapped = 1;

	while (swapped)
	{
		swapped = 0;
		for (i = 1; i < j; i++)
		{
			if (array[i] < array[i - 1])
			{
				tmp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
		j--;
	}
}
