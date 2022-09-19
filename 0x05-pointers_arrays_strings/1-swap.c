#include "main.h"

/**
 * swap_int - prototype
 * @a: pointer
 * @b: pointer
 *
 */
void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
