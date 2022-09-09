#include <stdio.h>
#include<string.h>

/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d = 0;

	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			b = 0;
			while (b < 10)
			{
				a = 0;
				while (a < 10)
				{
					if ((a + b) >= (d + c))
					{
						putchar('0' + d);
						putchar('0' + c);
						putchar(' ');
						putchar('0' + b);
						putchar('0' + a);
						putchar(',');
						putchar(' ');
					}
					a++;
				}
				b++;
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
