#include "main.h"
#include <stdio.h>

/**
 * print_array - prints no. of ints in an array
 *
 * @a: no of ints
 * @n: no of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
