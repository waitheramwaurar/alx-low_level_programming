#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: the second string
 * @n: number of bytes of s2
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 1;
	while (*(s1 + i))
		i++;

	j = 1;
	while (*(s2 + j))
		j++;

	if (n > j)
		n = j;

	new_str = malloc(sizeof(char) * (i + n + 1));

	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (*(s1 + i))
	{
		new_str[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < n)
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	
	new_str[i] = '\0';

	return (new_str);
}
