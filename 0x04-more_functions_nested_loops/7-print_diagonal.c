#include "main.h"

/**
 *  *  * print_diagonal - Entry point
 *   *   *@n: input param
 *    *    * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 1)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j != i)
				_putchar(' ');
			else
				_putchar('\\');
		}
		_putchar('\n');
	}
}
