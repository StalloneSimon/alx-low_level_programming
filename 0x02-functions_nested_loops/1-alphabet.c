
#include "main.h"
/**
 * print_alphabet - prints lowercase numbers using the _putchar
 *	function only. no printf or puts
 *
 * Return: 0.
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a' lowercase <= 'z'; lowercase++)
		_putchar(lowercase);
	_putchar('\n');
}
