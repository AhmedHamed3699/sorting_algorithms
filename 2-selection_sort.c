#include "./sort.h"

/**
 * selection_sort - sort array using selection sort
 *
 * @array: the array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int i, j, swpTmp, min;

	for (i = 0; i < (int)size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swpTmp = array[i];
			array[i] = array[min];
			array[min] = swpTmp;
			print_array(array, size);
		}
	}
}
