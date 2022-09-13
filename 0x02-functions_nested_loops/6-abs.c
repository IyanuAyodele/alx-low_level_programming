#include <unistd.h>
#include "main.h"

/**
 * _abs - returns the absolute value of an integer
 * @i: The integer to check
 *
 * Return: an integer which is the absolute value of n
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

