#include "main.h"

/**
 *  * _islower - only function.
 *   *
 *    * Return: Always 0.
 */
int _islower(int c)
{
	char chk;
	int nu = 0;

	for (chk = 'a'; chk <= 'z'; chk++)
	{
		if (c == chk)
		{
			nu = 1;
			break;
		}
		else
		{
			nu = 0;
		}
	}
	return (nu);
}
