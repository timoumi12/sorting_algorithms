#include "sort.h"

/**
 * selection_sort - sorts an array ASC
 * @array: array
 * @size: array size
 * Return: None
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, mid;
	int temp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		mid = i;
		for  (j = i + 1; j < size; j++)
		{
			if (array[j] < array[mid])
				mid = j;
		}
		if (i != mid)
		{
			temp = array[i];
			array[i] = array[mid];
			array[mid] = temp;
			print_array(array, size);
		}
	}
}
