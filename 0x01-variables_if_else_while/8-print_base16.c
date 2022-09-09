#include <stdio.h>

/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

/* your code goes there */
	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
/* your code goes there */
	return (0);
}
