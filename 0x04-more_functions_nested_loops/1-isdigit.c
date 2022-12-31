#include "main.h"
/**
 * _isdigit - this function checkes for no.s 0-9
 * @c: the input
 *
 * Return:1 success else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
