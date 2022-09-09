#include <stdio.h>
#include<string.h>

/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 */
void print(int *num, int n)
{
	    int i;
	        for ( i = 0 ; i < n ; i++)
			        printf("%d, ", num[i]);
		    printf("\n");
}
int main(void)
{
	int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *ptr;
	int temp;
	int i, n, j;
	n = 10;

/* your code goes there */
	for (j = 1; j <= n; j++)
	{
		for (i = 0; i < n-1; i++)
		{
			temp = num[i];
			num[i] = num[i+1];
			num[i+1] = temp;
			print(num, n);
		}
	}
	putchar('\n');
/* your code goes there */
	return (0);
}
