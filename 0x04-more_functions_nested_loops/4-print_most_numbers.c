#include "main.h"

/**
 * print_most_numbers - prints 0-9 except 2 & 4
 *
 * Return: void.
 */
int print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (!(num == 2) && !(num == 4))
			_putchar(num + '0');
	}
	_putchar('\n');
}
