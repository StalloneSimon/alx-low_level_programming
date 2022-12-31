#include "main.h"

/**
 * print_line - ptints a line on the terminal
 * @n: number of dashes to print
 */
void print_line(int n)
{
	int linerep;

	if (n > 0)
		for (linerep = 0; linerep < n; linerep++)
			_linerep('_');
	_putchar('\n');
}
