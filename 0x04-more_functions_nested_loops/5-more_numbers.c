#include "main.h"

/**
 * more_numbers - prints 0-14 in 10 rows
 *
 * Return: void
 */
void more_numbers(void)
{
	int no1, no2;

	no1 = no2 = 0;
	while (no1 < 10)
	{
		while (no2 <= 14)
		{
			if (no2 >= 10)
				_putchar(no2 / 10 + '0');
			_putchar(no2 % 10 + '0');
			++no2;
		}
		_putchar('\n');
		no2 = 0;
		no1++;
	}
}
