#include <stdio.h>
#include<string.h>

/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 */

int main(void)
{
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = 10;

/* your code goes there */
	int i;

	for (i = 0 ; i < n ; i++)
		if (i < n - 1)
		{
			putchar((num[i] % 10) + '0');
			putchar(',');
		}
		else if (i == n - 1)
		{
			putchar((num[i] % 10) + '0');
			putchar('\n');
		}
/* your code goes there */
	return (0);
}
