#include "stdio.h"
/**
 * main - entry point
 * description - prints all multiples of 3 and 5 below 1024
 *
 * Return: 0.
 */
int main(void)
{
	int no;
	int sum;

	for (no = 0; no < 1024; no++)

		if (no % 3 == 0 || no % 5 == 0)
			sum += no;
	printf("%d\n", sum);
	return (0);
}
