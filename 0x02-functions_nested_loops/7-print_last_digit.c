#include "main.h"

/**
 *  * print_last_digit - only function.
 *   * @n: the input parameter
 *    * Return: Always 0.
 */
int print_last_digit(int n)
{
	int nu;
	int r;

	if (n < 1)
	{
		nu = n * -1;
	}
	else if (n > 0)
	{
		nu = n;
	}
	else if (n == 0)
	{
		nu = 0;
	}
	r = nu % 10;
	_putchar('0' + r);
	return (r);
}
