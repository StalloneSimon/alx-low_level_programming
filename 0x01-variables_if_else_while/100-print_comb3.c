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

	for (no1 = 0; no1 < 9; no1++)
	{
		no2 = no1 + 1;
			
		do{

			putchar(no1 + '0');
			putchar(no2 + '0');

			if (no2 < 10)
			{

				putchar(',');
				putchar(' ');
			}
			no2++;
		}
		while (no2 < 10);
	}
	putchar('\n');

	return (0);
}
