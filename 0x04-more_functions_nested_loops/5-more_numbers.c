#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * Return: 0(Success).
 */

void more_numbers(void)
{
	int num, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count <= 9)
				num = count;
			else if (count > 9)
			{
				_putchar('1');
				num = count % 10;
			}
			_putchar(num + '0');
		}
		-putchar('\n');
	}
}
