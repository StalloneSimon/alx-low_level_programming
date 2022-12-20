#include "main.h"

/**
 * swap_int - Swaps values of two ints
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int to_swap = *a;
	*a = *b;
	*b = to_swap;
}
