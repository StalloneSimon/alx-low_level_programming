#include <stdio.h>

/**
 * main - prints the first 32 fibonacci numbers.
 * Return: 0.
 */
int main(void)
{
	unsigned long no1, no2, no3, no4;

	no1 = 0;
	no2 = 1;

	for (no3 = 1; no3 <= 32; no3++)
	{
		no4 = no1 + no2;
		no1 = no2;
		no2 = no4;

		if (no4 % 2 ==0)
		{
		printf("%ld", no4);

			if (no3 < 32)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
	return (0);
}
