#include "main.h"

/**
 * puts2 - prints every character in a string
 * @str: string evaluated
 * i is the index
 */
void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[i++])
		length++;

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
