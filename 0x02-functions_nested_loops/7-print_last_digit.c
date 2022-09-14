#include "main.h"

/**
 *  * print_last_digit - only function.
 *   * @n: the input parameter
 *    * Return: Always 0.
 */
int print_last_digit(int n)
{
	int nu = n % 10;
	int r;

	if (nu < 1)
	{
		r = nu * -1;
	}
	else if (nu > 0)
	{
		r = nu;
	}
	else if (nu == 0)
	{
		r = 0;
	}
	_putchar('0' + r);
	return (r);
}
