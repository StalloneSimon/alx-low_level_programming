#include <stdio.h>
/**
 * main -  entry point
 *
 * description - the program prints two digit numbers
 * from 00 to 99 seperated by , and followed by a space
 *
 * Return: Always 0.
 */
int main(void)
{
	int no1;
	int no2;

	for (no1 = 0; no1 < 10; no1++)
	{
		for (no2 = 0; no2 < 10; no2++)
		{
			if (!((no1 == no2) || (no2 > no1)))

			putchar((no1 % 10) + '0');
			putchar((no2 % 10) + '0');

			if (no1 == 9 && no2 == 8)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
