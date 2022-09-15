#include "main.h"

/**
 *  *  * print_line - Entry point
 *   *   *@n: parameter
 *    *    * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n < 1)
		_putchar('\n');
	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	if (n > 0)
		_putchar('\n');


}
