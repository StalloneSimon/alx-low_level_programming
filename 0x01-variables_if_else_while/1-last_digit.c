#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * description - assign a random number to the variable n
 *             if last no is less than 6 print less than 6
 *             if its greater than 5 or 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int modulous_n;

	modulous_n = n % 10;

	if (modulous_n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, modulous_n);
	}
	if (modulous_n == 0)
	{
		printf("Last digit of %d is %d and is 0\n",
			n, modulous_n);
	}
	if (modulous_n < 6 && modulous_n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, modulous_n);
	}

	return (0);
}
