#include "main.h"

/**
 * print_line - printing straight lines :)
 * @n: number of times the line will be drawn
 *
 * Return: void (Nothing)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
