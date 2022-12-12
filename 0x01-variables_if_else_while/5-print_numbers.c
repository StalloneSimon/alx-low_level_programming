#include <stdio.h>

/**
 * main - entry point
 *
 * description. the program prints all numbers
 *		in base 10 starting from 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int base_ten;

	for (base_ten = 0; base_ten < 10; base_ten++)
		printf("%d", base_ten);

		printf("\n");

	return (0);
}
