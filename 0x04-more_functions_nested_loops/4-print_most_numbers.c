#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Do not print 2 and 4
 *
 * Return: 1 if its uppercase, 0 if not
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n >= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
	}
	_putchar('\n');

}
