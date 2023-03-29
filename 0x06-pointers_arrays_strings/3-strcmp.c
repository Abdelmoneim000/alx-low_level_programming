#include "main.h"

/**
 * _strcmp - compares to strings
 * @s1: char pointer 1
 * @s2: char pointer 2
 * Return: an integer if s1 doesn't equal s2 or 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, n;

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
			if (s1[i] != s2[j])
			{
				n = s1 - s2;
			}
			else
			{
				n = 0;
			}
	}

	return (n);
}
