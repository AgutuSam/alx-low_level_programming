#include "main.h"

/**
 *  *  * print_square - Entry point
 *   *   *@size: size of input
 *    *    * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i;
	int j;
	int n = size;

	if (n < 1)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
