#include <stdio.h>

/**
 * main - prints the first 32 fibonacci numbers.
 * Return: 0.
 */
int main(void)
{
	unsigned long no1, no2, no3, no4, no5;

	no1 = no5 = 0;
	no2 = 1;

	for (no3 = 0; no3 <= 33; no3++)
	{
		no4 = no1 + no2;
		no1 = no2;
		no2 = no4;

		if (no4 % 2 == 0 && no4 < 4000000)
		{
			no5 += no4;
		}

	}
	printf("%ld\n", no5);
	return (0);
}
