#include "main"

/**
 * more_numbers - prints 0-14 in 10 rows
 *
 * Return: void
 */
void more_numbers(void)
{
	int rows;
	int noS;

	for (rows = 0; rows < 10; rows++)
	{
		for (noS = 0; noS <= 14; noS++)
		{
			_putchar((noS / 10) + '0');
		}
		_putchar((noS % 10) + '0');
	}
	_putchar('\n');
}
