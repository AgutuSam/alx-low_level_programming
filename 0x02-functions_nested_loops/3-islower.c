#include "main.h"

/**
 *  * _islower - only function.
 *   * @c: - the input parameter
 *    * Return: Always an integer.
 */
int _islower(int c) /*c is the parameter*/
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
