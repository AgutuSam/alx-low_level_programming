#include "main.h"

/**
 *  * _isalpha - only function.
 *   * @c: the input parameter
 *    * Return: Always an integer.
 */
int _isalpha(int c)
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

	if (nu < 1)
	{
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
	}
	return (nu);
}
