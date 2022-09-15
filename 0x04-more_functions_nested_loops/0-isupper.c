#include "main.h"

/**
 *  * _isupper - only function.
 *   * @c: - the input parameter
 *    * Return: Always an integer.
 */
int _isupper(int c)
{
	char chk;
	int nu = 0;

	for (chk = 'A'; chk <= 'Z'; chk++)
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
