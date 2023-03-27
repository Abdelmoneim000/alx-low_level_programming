#include "main.h"

/**
 * puts2 -prints every other character of a string
 * followed by a new line
 * @str: pointer of string to be checked
 *
 * Return: 0 (Success)
 */

void puts2(char *str)
{
	int i = 0;

	while (i != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
		_putchar('\n');
	}
}
