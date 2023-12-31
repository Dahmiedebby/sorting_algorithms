#include "sort.h"

/**
 * quick_sort_hoare - Quick Sort algorithm with Hoare
 * partition scheme.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	qsort_hoare(array, 0, size - 1, size);
}

/**
 * qsort_hoare - Quick Sort using Hoare partition.
 * @array: The array to be sorted.
 * @smal: The smallest index of the partition.
 * @big: The biggest index of the partition.
 * @size: The size of the array.
 * Return: void.
 */
void qsort_hoare(int *array, int smal, int big, size_t size)
{
	int idx;

	if (smal < big)
	{
		idx = hoare_part(array, smal, big, size);
		if (idx > smal)
			qsort_hoare(array, smal, idx, size);
		qsort_hoare(array, idx + 1, big, size);
	}
}
