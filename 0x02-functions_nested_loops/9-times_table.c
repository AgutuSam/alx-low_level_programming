#include "main.h"

/**
 *  *  * times_table - only function.
 *   *   * c - the input parameter
 *    *    * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 9)
			{
				r = (i * j);
				if (r / 10)
					_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				_putchar('\n');
			}
			else if (j < 9)
			{
				r = (i * j);
				if (r / 10)
					_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
