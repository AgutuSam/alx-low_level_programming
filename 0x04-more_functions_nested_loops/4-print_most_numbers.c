#include "main.h"

/**
 *  *  * print_most_numbers - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar('0' + n);
	}
	_putchar('\n');
}
