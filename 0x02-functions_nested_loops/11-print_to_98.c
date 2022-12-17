#include "main.h"

/**
 * print_to_98 - prints natural numbers
 *
 * @n: numbers to print
 */
void print_to_98(int n)
{
	for (n = 1; n <= 98; n++)
	{
		if (n >= 1 && n <= 97)
			_putchar(',');
			_putchar(' ');
	}
}
