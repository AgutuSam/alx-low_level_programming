#include "main.h"

/**
 * _strlen - prototype
 * @s: pointer
 * Return: returns integer (count)
 *
 */
int _strlen(char *s)
{
	int count = 0;

	for ( ; *s != '\0'; s++)
		count = count + 1;
	return (count);
}
