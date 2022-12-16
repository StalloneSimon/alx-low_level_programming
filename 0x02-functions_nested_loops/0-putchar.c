#include <unistd.h>
#include <math.h>
/**
 * main - prints _putchar
 *
 * Return: Always 0.
 */
int _puthchar(char c)
{

	return (write(1, &c, 1));

}
