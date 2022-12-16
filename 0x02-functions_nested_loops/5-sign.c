#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: is the number being checked
 * Return: 1 if +
 * return 0 if 0
 * return -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
