#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: 1 if its uppercase, 0 if not
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar(n);
	if (n > 9)
		_putchar('\n');

}
