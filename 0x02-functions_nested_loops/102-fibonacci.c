#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int i;
	printf("%d, %d", a, b);

	for (i = 0; i < 48; i++)
	{
		int sum = a + b;
		printf(", %d", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
