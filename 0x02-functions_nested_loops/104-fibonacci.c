#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers.
 *
 * Return: 0.
 */

int main(void)
{
	unsigned long int fib1 = 0, fib2 = 1, fib3, num, count = 0;

	printf("Enter the value of num \n");
	scanf("%lu", &num);
	printf("First %lu FIBONACCI numbers are ...\n", num);
	printf("%lu\n", fib1);
	count = 2;
	while (count < num)
	{
		fib3 = fib1 + fib2;
		count++;
		printf("%lu\n", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	return (0);
}
