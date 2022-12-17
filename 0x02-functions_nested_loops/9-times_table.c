#include "main.h"

/**
 * times_table - prints the 9 multiplication table from 0.
 */
void times_table(void)
{
	int no1;
	int no2;
	int mult;

	for (no1 = 0; no1 <= 9; no1++)
	{
		_putchar('0');

		for (no2 = 1; no2 <= 9; no2++)
		{
			_putchar(',');
			_putchar(' ');

			mult = no1 * no2;

			if (mult <= 9)
				_putchar(' ');
			else
				_putchar((mult / 10) + '0');

			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}
