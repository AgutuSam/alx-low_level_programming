#include "main.h"

/**
 * _strcpy - func
 * @dest: param 1
 * @src: param 2
 * Return: returns char
 */
char *_strcpy(char *dest, char *src)
{
	char *g = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest = 0;
	}
	return (g);
}
