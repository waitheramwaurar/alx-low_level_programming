#include<stdio.h>

/**
 * main - prints alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
