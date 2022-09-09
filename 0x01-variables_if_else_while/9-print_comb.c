#include <stdio.h>
#include<string.h>

/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 */

int main(void)
{
	int num[10] = {0, 1, 2, 3, 4, 6, 7, 8, 9};
	int i;
	int n = 10;

	for  i = 0 ; i < n ; i++)
	{
		putchar((num[i] % 10) + '0');
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
