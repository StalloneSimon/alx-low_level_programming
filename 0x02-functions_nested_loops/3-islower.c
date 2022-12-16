#include "main.h"
/**
 * _islower - shows if c is lowercase
 * @c: is the char we are checking
 * Return: 1 if lowercase else return 0
 */

int _islower(int c)

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

