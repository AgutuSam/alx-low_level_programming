#include<stdio.h>
#include "main.h"

/**
 *  *  * print_to_98 - Entry point
 *   *   *@n: the input parameter
 *    *    * Return: void return
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
			else
				printf("\n");
		}
	}
}
