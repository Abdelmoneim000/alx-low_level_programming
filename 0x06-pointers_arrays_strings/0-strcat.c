#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings together
 * @dest: first string
 * @src: second string
 * Return: dest string after concatenation.
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
