#include "main.h"

/**
 * _isalpha - checks if the parameter is alphabetic
 * @c: the parameter to be checked
 * Return: 1 if the parameter is a letter, otherwise return 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
