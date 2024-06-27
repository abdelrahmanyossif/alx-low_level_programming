#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar functionto print
 *                         the alphabet
*/

void print_alphabet(void);
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(str[ch]);
	_putchar('\n');

}
