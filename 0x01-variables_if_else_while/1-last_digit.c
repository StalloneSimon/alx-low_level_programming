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

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}

	if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

	if ((n % 10) <= 5 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and not 0\n",
			n, n % 10);
	}
	return (0);
}
