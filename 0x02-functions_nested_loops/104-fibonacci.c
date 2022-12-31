#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers.
 *
 * Return: 0.
 */

int main(void)
{
	unsigned long int fib1 = 0, fib2 = 1, fib3, num, count;

	scanf("%lu", &num);

	for (count = 1; count <= num; count++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		printf("%lu", fib3);
			printf(", ");
	}
	printf("\n");
	return (0);
}
