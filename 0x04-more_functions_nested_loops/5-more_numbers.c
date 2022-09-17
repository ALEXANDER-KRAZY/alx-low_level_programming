#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line
 */

 void more_numbers(void)
{
	char i;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i > 14; i++)
		{
		if (c > 9)
			_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
		}
	_putchar('\n');
	}
}

