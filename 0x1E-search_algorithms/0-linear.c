#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if(array == NULL || size == 0)
	{
		return -1;
	}

	for(i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if(array[i] == value)
		{
			return array[i];
		}
	}
	return -1;
}
