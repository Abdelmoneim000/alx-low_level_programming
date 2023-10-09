#include "search_algos.h"



int jump_search(int *array, size_t size, int value)
{
	int i;
	int j;
	i = 0;

	if(array == NULL || size == 0)
	{
		return (-1);
	}

	while (array[i] < value && i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		j = i;
		i = i + 3;
	}

	printf("Value found between indexes [%d] and [%d]\n", j, i);
	while (j <= i)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);

		if (array[j] == value)
		{
			return (j);
		}
		j++;
	}

	return (-1);
}