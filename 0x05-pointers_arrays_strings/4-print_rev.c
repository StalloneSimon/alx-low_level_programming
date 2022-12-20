#include "main.h"

/**
 * print_rev - reverses order of a string
 * @s: the string to be reversed and printed
 * i is the index
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
