#include <stdio.h>

/**
 * main - Prints all numbers in base 10 from 0 to 9 followd by a new line
 *
 * Result: Always 0. (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);

	printf("\n");

	return (0);
}
