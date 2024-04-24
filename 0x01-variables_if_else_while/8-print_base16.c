#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base;
	int base1;

	for (base = '0'; base <= '9'; base++)
	{
		putchar(base);
	}
	for (base1 = 'a'; base1 <= 'f'; base1++)
	{
		putchar(base1);
	}
	putchar('\n');
	return (0);
}
