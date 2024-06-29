#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: is the number of times the character \ should be printed
 *
 * Return: Always 0 (success)
*/

void print_diagonal(int n)
{
	int space, postn;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
