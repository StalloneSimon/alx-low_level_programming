#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The table requested.
 * Return: void.
 */
void print_times_table(int n)
{
	int no1;
	int no2;
	int mult;

	if (!(n > 15 || n < 0))
	{
		for (no1 = 0; no1 <= n; no1++)
		{
			for (no2 = 0; no2 <= n; no2++)
			{
				mult = (no1 * no2);
				if (no2 != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (mult < 10 && no2 != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mult % 10) + '0');
				}
				else if (mult >= 10 && mult < 100)
				{
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else if (mult >= 100 && j != 0)
				{
					_putchar((mult / 100) + '0');
					_putchar((mult / 10) % 10 + '0');
					_putchar((mult % 10) + '0');
				}
				else
					_putchar((mult % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
