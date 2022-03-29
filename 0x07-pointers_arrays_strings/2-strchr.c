#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string 
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of character
 */

char *_strchr(char *s, char c)
{
	int i;

	while *(s + i)
	{
		if (*(s + i) == c)
		{
			return (s + i);
			break;
		}
		else
			return NULL;
		i++;
	}
}
