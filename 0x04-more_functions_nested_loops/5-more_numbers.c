#include "main.h"

/**
 * more_numbers - prints 10 times, 1 to 14
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48); 
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
