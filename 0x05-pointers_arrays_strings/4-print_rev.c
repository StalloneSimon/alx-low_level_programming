#include "main.h"

/**
 * print_rev - reverses order of a string
 * @s: the string to be reversed and printed
 * i is the index
 */
void print_rev(char *s)
{
	int length = 0;
	int i;
	int rev;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;

		for (rev = (length - 1); rev >= 0; rev--)
		{
			_putchar(s[rev]);
		}

	}
	_putchar('\n');
}
