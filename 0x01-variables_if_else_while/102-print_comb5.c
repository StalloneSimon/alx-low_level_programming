#include <stdio.h>

/**
 * main - entry point
 *
 * Prints all possible combinations of two two-digit numbers,
 *        ranging from 0 to 99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int no1, no2;

	for (no1 = 0; no1 <= 98; no1++)
	{
		for (no2 = no1 + 1; no2 <= 99; no2++)
		{
			putchar((no1 / 10) + '0');
			putchar((no1 % 10) + '0');
			putchar(' ');
			putchar((no2 / 10) + '0');
			putchar((no2 % 10) + '0');

			if (no1 == 98 && no2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
