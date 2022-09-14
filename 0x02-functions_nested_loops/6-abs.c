#include "main.h"

/**
 *  *  * _abs - Entry point
 *   @n: integer parameter
 *   *   *
 *    *    * Return: Always an integer
 */
int _abs(int n)
{
	int nu;

	if (n < 1)
	{
		nu = n * -1;
	}
	else if (n > 0)
	{
		nu = n;
	}
	return (nu);
}
