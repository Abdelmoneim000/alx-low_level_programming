#include "main.h"
/**
 * rev_string - takes a parameter of a string and reverse it
 * @s: parameter of string to be passed
 *
 * Return: 0 (Success)
 */

void rev_string(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}

	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
