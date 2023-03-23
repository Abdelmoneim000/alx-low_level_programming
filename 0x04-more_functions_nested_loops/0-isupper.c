#include "main.h"

/**
 * _isupper - checks whether the character is uppercase
 * or lowercase
 * @c: character parameter to be checked
 *
 * Return: 1 if the character is uppercase and 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
