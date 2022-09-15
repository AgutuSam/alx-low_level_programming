#include "main.h"

/**
 *  *  * more_numbers - only function.
 *   *   *
 *    *    * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int j;
	int r = 1;
	int q;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('0' + r);
				q = j - 10;
			}
			else
			{
				q = j;
			}
			_putchar(q + '0');
			if (j == 14)
				_putchar('\n');
		}
	}
}
