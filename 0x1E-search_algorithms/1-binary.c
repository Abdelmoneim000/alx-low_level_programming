#include "search_algos.h"

/**
 * print_arr - print the sub array after
 * devision
 *
 * @array: input sub-array
 * @left: the start pointer of the sub-array
 * from left.
 * @right: the end pointer to the sub-array.
 */

void print_arr(int *array, int *left, int *right)
{
	int i;

	printf("Searching in array: ");
	for (i = *left; i <= *right; i++)
	{
		if (i == *right)
		{
			printf("%d", array[i]);
			continue;
		}
		printf("%d, ", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (left <= right)
	{
		/*get the middle value*/
		mid = left + (right - left) / 2;

		print_arr(array, &left, &right);
		if (array[mid] == value)
		{
			return (mid);
		}
		/*if the middle value is less than the value*/
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		/*if the middle value is greater...*/
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
