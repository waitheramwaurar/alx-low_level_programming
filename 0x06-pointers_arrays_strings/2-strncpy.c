#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: the string thats being copied to
 * @src: the string that is being copied from
 * @n: the number of bytes from src
 *
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	j = 0;

	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
