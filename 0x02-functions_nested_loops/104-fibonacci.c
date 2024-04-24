#include"main.h"

/**
 * numLength - returns the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 *	Solution was copied from Nobert Patrick
 *	Wise, github handle: Trikcode
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count, initial0s;
