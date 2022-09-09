#include <stdio.h>
#include<string.h>

/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 */

int main(void)
{
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
				if (d != c && c != b && b != d && d < c && c < b)
				{
					putchar('0' + d);
					putchar('0' + c);
					putchar('0' + b);
					if (b + c + d != 24)
					{
						putchar(',');
						putchar(' ');
					}
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
