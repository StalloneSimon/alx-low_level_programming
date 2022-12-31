#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 *		using only putchar
 * Return: 0-9 followed by new line
 */
void print_numbers(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		num++;
		_putchar(num + '0');
	}
	_putchar('\n');
}
