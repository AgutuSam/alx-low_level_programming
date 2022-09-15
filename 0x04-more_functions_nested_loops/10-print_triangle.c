#include "main.h"

/**
 *  *  *  * print_triangle - Entry point
 *   *   *   *@size: size of input
 *    *    *    * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i;
	int j;
	int n = size;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = n; j > 0; j--)
			{
				if (j <= i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
