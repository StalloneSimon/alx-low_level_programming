#include "main.h"

/**
 * print_rev - reverses order of a string
 * @s: the string to be reversed and printed
 * i is the index
 */
void print_rev(char *s)
{
	int i;
	int rev;

	for (i = 0; s[i] != '\0'; i++)
	{
		'\0'++;

		for (rev = ('\0' - i - 1); rev >= 0; rev--)
		{
			_putchar(s[rev]);
		}

	}
	_putchar('\n');
}
