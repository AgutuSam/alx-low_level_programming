#include "main.h"

/**
 * _puts - prototype
 * @str: pointer
 *
 */
void _puts(char *str)
{
	for ( ; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
