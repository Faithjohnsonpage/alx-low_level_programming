#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@m: The computed variable
 * Return - int
 */

int _abs(int m)
{
	if (m < 0)
	{
		int abs_val;

		abs_val = m * -1;
		return (abs_val);
		}
	return (m);
}
