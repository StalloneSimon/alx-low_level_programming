#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase numbers using the _putchar
 *      function only. no printf or puts
 *
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char lowercase;

	while (count++ <= 9)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
			_putchar(lowercase);
		_putchar('\n');
	}
}
