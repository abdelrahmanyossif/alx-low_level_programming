#include <stdio.h>


/**
 * main - Enrty point
 *
 * Description: print the alphabet in lowercase
 *
 * Return: Always (0) (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
