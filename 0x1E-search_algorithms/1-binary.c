#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the search
 * @size: is the number of elements in an array
 * @value: the value in search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
