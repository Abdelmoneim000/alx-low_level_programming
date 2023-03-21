#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the parameter to be checked
 * Return: 1 and prints + if n is greater than 0
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than 0.
 */

int print_sign(int n)
{
	switch (n)
	{
		case(n > 0):
			putchar('+');
			return (1);
		case(n == 0):
			putchar(48);
			return (0);
		case(n < 0):
			putchar('-');
			return (-1);
	}
}
