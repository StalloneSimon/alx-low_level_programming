#include "main.h"

/**
 * print_rev - reverses order of a string
 * @s: the string to be reversed and printed
 * i is the index
 */
void print_rev(char *s)
{
	int length = 0, i;

	while (s[i++])
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
