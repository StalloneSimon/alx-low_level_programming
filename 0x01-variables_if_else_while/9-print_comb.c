#include <stdio.h>
/**
 * main - entry point
 *
 * description - prints single digit no.s
 *               seperated by ,
 *
 * Return: Always 0.
 */
int main(void)
{
	int singledgts;

	for (singledgts = 0; singledgts <= 9; singledgts++)
	{

		putchar((singledgts % 10) + '0');

		if (singledgts == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
