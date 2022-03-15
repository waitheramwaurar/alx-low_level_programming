#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Parameter 'c': the character whose state to be determined
 *
 * Return: 1 if lowercase and 0 if not lowercase
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
