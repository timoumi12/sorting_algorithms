#include "sort.h"

/**
 * bubble_sort - sorts an array ASC
 * @array: array
 * @size: array size

 * Return: None
*/

void bubble_sort(int *array, size_t size)
{
	size_t j;
	int aux, ok = 1;

	if (array == NULL || size < 2)
		return;
	while (ok == 1)
	{
		ok = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				ok = 1;
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
