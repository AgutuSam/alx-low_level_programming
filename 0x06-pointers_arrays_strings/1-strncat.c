#include "main.h"

/**
 * _strncat - prototype function
 *
 * @dest: input variable (pointer)
 * @src: input variable (pointer)
 * @n: input variable (pointer)
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}
