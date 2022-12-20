#include "main.h"

/**
 * puts_half - prints half the string characters
 * and the last n chars of the string
 * @str: string under evaluation
 */
void puts_half(char *str)
{
	int i = 0, length = 0, n;

	while (str[i++])
		length++;

	if ((length % 2) == 0)
		n = len / 2;

	else
		n = (length + 1) / 2;

	for (i = n; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}


