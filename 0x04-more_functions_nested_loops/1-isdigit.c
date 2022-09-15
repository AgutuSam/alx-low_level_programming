#include "main.h"

/**
 *  *  _isdigit - only function.
 *   * @c: - the input parameter
 *    * Return: Always an integer.
 */
int _isdigit(int c)
{
	char chk;
	int nu = 0;

	for (chk = '0'; chk <= '9'; chk++)
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
