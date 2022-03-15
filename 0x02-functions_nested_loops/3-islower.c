#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * int c - parameter for the _islower function
 *
 * return - 1 if lowercase an 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
