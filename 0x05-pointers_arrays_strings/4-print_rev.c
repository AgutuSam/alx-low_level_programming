#include "main.h"

/**
 * print_rev - prototype
 * @s: pointer
 *
 */
void print_rev(char *s)
{
	char myStr[100];
	int i;
	int count = 0;

	for ( ; *s != '\0'; s++)
	{
		myStr[count + 1] = *s;
		count = count + 1;
	}
	for (i = count; i > 0; i--)
	{
		_putchar(myStr[i]);
	}
	_putchar('\n');
}
