#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	int i;

	printf("%d, %d", a, b);

	for (i = 0; i < 48; i++)
	{
		long int sum = a + b;
		printf(", %d", sum);
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
