#include "main.h"

/**
 *  *  * print_alphabet_x10 - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char n;
	int count;

/* your code goes there */
	count = 0;
	while (count < 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		count++;
	}
/* your code goes there */
}
