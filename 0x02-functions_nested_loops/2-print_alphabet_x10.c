#include "main.h"

/**
 * print_alphabet_x10 - prints all letters 10 times followd by a newline
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
