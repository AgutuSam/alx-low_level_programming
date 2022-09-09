#include <stdio.h>
#include<string.h>

/**
 *  *  * print - Entry point
 *   *   * num - an integer
 *    *    * n - as an integer
 */
/* num as a parameter for func print*/
/* n as a parameter for func print*/
void print(int *num, int n) /* num and n are integers*/
{
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
}

/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 */

int main(void)
{
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int temp;
	int i;
	int j;
	int n = 10;
/* your code goes there */
	for (j = 1; j <= n; j++)
	{
		for (i = 0; i < n - 1; i++)
		{
			temp = num[i];
			num[i] = num[i + 1];
			num[i + 1] = temp;
			print(num, n);
		}
	}
/* your code goes there */
	return (0);
}
