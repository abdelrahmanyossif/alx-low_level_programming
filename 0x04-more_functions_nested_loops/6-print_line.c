#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: is the number of times the character _ should be printed
 * Return: Always 0 (success)
*/

void print_line(int n)
{
	int inchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (inchr = 1; inchr <= n; inchr++)
			_putchar('_');
		_putchar('\n');
	}
}
