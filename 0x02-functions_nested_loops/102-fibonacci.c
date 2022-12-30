#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers.
 * Return: 0.
 */
int main(void)
{
	int no1;
	int no2;
	int no3;
	int no4;
	int count = 50;
	no1 = 0;
	no2 = 1;
	
	for (no3 = 1; no3 <= 50; no3++)
	{
		no4 = no1 + no2;
		no1 = no2;
		no2 = no4;


		printf("%d, ", no4);
	}
	printf("\n");
	return (0);
}
