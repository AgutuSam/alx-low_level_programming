#include "main.h"

/**
 *  * print_sign - only function.
 *   *@n: - the input parameter
 *    * Return: Always an integer.
 */
int print_sign(int n)
{
	int nu = 0;

	if (n > 0)
	{
		_putchar('+');
		nu = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		nu = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		nu = -1;
	}
	return (nu);
}
