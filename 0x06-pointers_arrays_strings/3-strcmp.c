#include "main.h"

/**
 * _strncmp - compares two strings
 *
 * @s1: the first string
 * @s2: second string 
 *
 * Return: 0 if strings match
 * value > 0 if s2 is less than s1
 * value < 0 if s1 less than s2
 */

int *_strncmp(char *s1, char *s2)
{
        int i, j;

        i = 0;

        j = 0;

        while (s1[i])
	{
		if (s1[i] == s2[j])
		       continue;
		else
			break;
		i++;
		j++;	
	}

	if (*s1 == *s2)
	{
		return 0;
	}
	else if (s1[i] < s2[j])
	{
		return (-15);
	}
	else
		return 15;
}
