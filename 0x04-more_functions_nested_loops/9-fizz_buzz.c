#include "main.h"
#include <stdio.h>

/**
 * main - prints noS from 1-100
 * if number is a multiple of 3 print fizz
 * if its a multiple of 5 print buzz
 * if its a multiple of both print fizzbuzz
 * Return: 0.
 */
int main (void)
{
	int no1;

	for (no1 = 1; no1 <= 100; no1++)
	{
		if (no1 % 3 ==0 && no1 % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (no1 % 3 == 0)
		{
			printf("Fizz");
		}
		else if (no1 % 5 == 0)
		{
			printf("Buzz");
		}else
		{
			printf("%d", no1);
		}
		if (no1 != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
