#include "main.h"

/**
 * _strcmp - compares to strings
 * @s1: char pointer 1
 * @s2: char pointer 2
 * Return: an integer if s1 doesn't equal s2 or 0.
 */

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}
