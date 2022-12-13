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
	int no3;

	for (no1 = 0; no1 < 8; no1++)
	{
		for (no2 = no1 + 1; no2 < 9; no2++)
		{
			no3 = no2 + 1;

			do {
				putchar(no1 + '0');
				putchar(no2 + '0');
				putchar(no3 + '0');

				if (no1 < 7 && no2 < 9 && no3 < 10)
				{

				putchar(',');
				putchar(32);
				}
				no3++;
			} while (no3 < 10);
		}
	}
	putchar('\n');

	return (0);
}

